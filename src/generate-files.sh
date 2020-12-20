index_name=$1
IFS='-'
read -r index name <<< "$index_name"
if [[ ! -d "$index_name" ]]
then
	mkdir "$index_name"
	touch "$index_name/$name.cpp"
	printf "#include <gtest/gtest.h>\n#include \"$name.cpp\"\n\nTEST(Solution, SimpleTest){\n\tASSERT_();\n}\n" > "$index_name/${name}_test.cpp"
	obj="./$index_name/${name}.o"
	printf "${name}_test: $obj $index_name/${name}_test.cpp\n\t\$(CC) \$(CFLAGS) \$(GTEST) \$^ -o \$@\n" >> Makefile
	printf "\t\t$obj" >> Makefile
	printf ' \\\n' >> Makefile  
	printf "\t\t${name}_test" >> Makefile
	printf ' \\\n' >> Makefile  
	subl Makefile
fi