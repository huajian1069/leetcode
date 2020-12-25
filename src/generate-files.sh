index_name=$1
IFS='-'
read -r index name <<< "$index_name"
if [[ ! -d "$index_name" ]]
then
	mkdir "$index_name"
	printf "#include <iostream>\nusing namespace std;" > "$index_name/$name.cpp"
	printf "#include <gtest/gtest.h>\n#include \"$name.cpp\"\n\nTEST(Solution, SimpleTest1){\n\tSolution solution;\n\tASSERT_();\n}\n" > "$index_name/${name}_test.cpp"
	obj="./$index_name/${name}.o"
	printf "${name}_test: $obj $index_name/${name}_test.cpp\n\t\$(CC) \$(CFLAGS) \$(GTEST) \$^ -o \$@\n" >> Makefile
	printf "\t\t$obj" >> Makefile
	printf ' \\\n' >> Makefile  
	printf "\t\t${name}_test" >> Makefile
	printf ' \\\n' >> Makefile  
	subl Makefile
fi