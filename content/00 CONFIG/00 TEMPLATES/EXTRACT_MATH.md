<%*
// 1. Access the Markdown view directly from the app workspace
const activeView = app.workspace.getActiveViewOfType(tp.obsidian.MarkdownView);

if (!activeView) {
    new Notice("No active Markdown file found. Click inside your note first.");
    return;
}

const editor = activeView.editor;
const fileContent = editor.getValue();
const lines = fileContent.split('\n');

// 2. Parsing Variables
let currentHeading = "Top of Document";
let mathBlocks = [];
let isInsideMathBlock = false;
let currentBlockBuffer = [];

// 3. The Logic Loop
for (let i = 0; i < lines.length; i++) {
    const rawLine = lines[i];
    const trimmedLine = rawLine.trim();

    // Track Headings (to link back later)
    if (trimmedLine.startsWith('#')) {
        currentHeading = trimmedLine.replace(/^#+\s+/, '');
    }
	if(currentHeading == "LaTeX") {
		continue;
	};
    // Detect Math Blocks ($$)
    if (trimmedLine.startsWith('$$')) {
        if (!isInsideMathBlock) {
            isInsideMathBlock = true;
            currentBlockBuffer = [];
        } else {
            isInsideMathBlock = false;
            mathBlocks.push({
                heading: currentHeading,
                latex: currentBlockBuffer.join('\n')
            });
        }
    } else if (isInsideMathBlock) {
        currentBlockBuffer.push(rawLine);
    }
}

// 4. Final Output Generation
if (mathBlocks.length > 0) {
    let summary = "\n\n---\n# LaTeX\n";
    
    // Group by heading to avoid duplicates
    const grouped = mathBlocks.reduce((acc, item) => {
        if (!acc[item.heading]) acc[item.heading] = [];
        acc[item.heading].push(item.latex);
        return acc;
    }, {});

    for (const [head, blocks] of Object.entries(grouped)) {
        // Create a link back to the header
        summary += `\n## [[#${head}]]\n`;
        summary += "```latex";
        blocks.forEach(code => {
            summary += "\n" + code.trim() + "\n";
        });
        summary += "```\n";
    }

    // 5. Append to the end of the file
    const lineCount = editor.lineCount();
    editor.replaceRange(summary, { line: lineCount, ch: 0 });
    new Notice(`Success: Extracted ${mathBlocks.length} blocks.`);
} else {
    new Notice("No $$ math blocks found in this note.");
}
%>