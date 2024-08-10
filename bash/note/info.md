Copy all name of the current directory
`find . -maxdepth 1 -type d -not -path '.' | sed 's|^\./||' | pbcopy`
Count all line of a filetype in the current directory
`find . -name '*.md' | xargs -I {} cat {} | wc -l`
