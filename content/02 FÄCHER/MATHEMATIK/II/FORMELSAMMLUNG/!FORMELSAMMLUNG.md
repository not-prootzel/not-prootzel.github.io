---
publish: true
tags:
aliases:
---
```dataviewjs
const folder = dv.current().file.folder;
const pages = dv.pages('"' + folder + '"').sort(p => p.file.name);

for (const page of pages){
	if (page.homepage){
		dv.paragraph("![["+page.file.path+"]]");
	}
}

for (const page of pages) {
    if (!page.add) {continue;};
    

	dv.paragraph('<div class="page-break" style="page-break-before: always;"></div>\n');
	dv.paragraph("![[" + page.file.path + "]]");
    
}
```

