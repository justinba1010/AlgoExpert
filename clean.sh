# /bin/zsh
find . -iname '*.cpp' -type f -exec sed -i.orig 's/	/    /g' {} +
rm */*.orig
find . -iname '*.cpp' -type f -exec zsh -c 'tail -n1 {} | read -r _ || echo >> {};' \;

