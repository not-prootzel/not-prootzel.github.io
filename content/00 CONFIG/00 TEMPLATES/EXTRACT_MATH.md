<%*
const activeView = app.workspace.getActiveViewOfType(tp.obsidian.MarkdownView);
if (!activeView) {
    new Notice("No active note found.");
    return;
}

const editor = activeView.editor;
const lines = editor.getValue().split('\n');

let currentHeading = "Top of Document";
let currentListHeading = ""; 
let mathBlocks = {}; 
let isInsideMathBlock = false;
let currentBlockBuffer = [];
let totalCount = 0;

for (let i = 0; i < lines.length; i++) {
    const rawLine = lines[i];
    const trimmed = rawLine.trim();

    // 1. Update Current Markdown Heading (#)
    if (trimmed.startsWith('#')) {
        currentHeading = trimmed.replace(/^#+\s+/, '');
        currentListHeading = ""; // Reset list heading when a new real heading starts
    }

    // 2. Detect Bold List Items (e.g., "1. **Heading**")
    // This regex looks for a digit, a dot, space, and then bold text
    const boldListMatch = trimmed.match(/^\d+\.\s+\*\*(.*?)\*\*/);
    if (boldListMatch) {
        currentListHeading = boldListMatch[1];
    }

    // 3. Detect Math Blocks
    if (trimmed.startsWith('$$')) { 
        if (!isInsideMathBlock) { 
            isInsideMathBlock = true; 
            currentBlockBuffer = []; 
        } else { 
            isInsideMathBlock = false; 
            
            // Create a composite label: "Heading > Bold Item"
            const displayLabel = currentListHeading 
                ? `${currentHeading} ➔ ${currentListHeading}` 
                : currentHeading;

            if (!mathBlocks[displayLabel]) mathBlocks[displayLabel] = [];
            mathBlocks[displayLabel].push(currentBlockBuffer.join('\n').trim());
            totalCount++;
        } 
    } else if (isInsideMathBlock) { 
        currentBlockBuffer.push(rawLine); 
    }
}

// 4. Output Generation
if (totalCount > 0) {
    let summary = "\n\n---\n# LaTeX Summary\n";

    for (const [label, blocks] of Object.entries(mathBlocks)) {
        // Link to the main heading, but show the Bold List Item text in the label
        const linkTarget = label.split(' ➔ ')[0];
        summary += `\n## [[#${linkTarget}|${label}]]\n`;
        summary += "```latex\n";
        blocks.forEach(code => {
            summary += code + "\n\n";
        });
        summary += "```\n";
    }

    const lineCount = editor.lineCount();
    editor.replaceRange(summary, { line: lineCount, ch: 0 });
    new Notice(`Extracted ${totalCount} blocks.`);
} else {
    new Notice("No LaTeX found.");
}
%>