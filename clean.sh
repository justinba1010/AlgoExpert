# /bin/zsh
find . -iname '*.cpp' -type f -exec sed -i.orig 's/	/    /g' {} +
rm */*.orig
find . -iname '*.cpp' -type f -exec zsh -c 'tail -n1 {} | read -r _ || echo >> {};' \;

for x in $(find . -iname '*.cpp' -type f); do
    sed -i '' '/Write your code here/d' $x;
    head -5 $x | diff copyright.txt - || ( ( cat copyright.txt; echo; cat $x) > /tmp/file;  
    mv /tmp/file $x )  
done 
