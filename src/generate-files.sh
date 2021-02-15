index_name=$1
acm=$2
IFS='-'
read -r index name <<< "$index_name"
if [[ ! -d "$index_name" ]]
then
	mkdir "$index_name"
	if [[ $acm == 'acm' ]]
	then
		echo $acm
		printf "#include <iostream>\nusing namespace std;\n\nint main(){\n\tint n;\n\tcin >> n;\n\tfor(int i = 0; i < n; i++){\n\t\tfor(int j = 0; j < m; j++){\n\t\t\tcin >> ;\t\t\n\t\t}\n\t\tcout <<  << endl;\n\t}\n}" >  "$index_name/$name.cc"
	else 
		printf "#include <iostream>\nusing namespace std;\n\nclass Solution{\npublic:\n\n};" > "$index_name/$name.hpp"
		printf "#include \"$name.hpp\"\n" > "$index_name/$name.cpp"
		printf "#include <gtest/gtest.h>\n#include \"$name.hpp\"\n\nTEST(Solution, SimpleTest1){\n\tSolution solution;\n\tASSERT_EQ();\n}\n" > "$index_name/${name}_test.cpp"
		obj="./$index_name/${name}.o"
		printf "${name}_test: $obj $index_name/${name}_test.cpp\n\t\$(CC) \$(CFLAGS) \$(GTEST) \$^ -o \$@\n" >> Makefile
		printf "\t\t$obj" >> Makefile
		printf ' \\\n' >> Makefile  
		printf "\t\t${name}_test" >> Makefile
		printf ' \\\n' >> Makefile  
		subl Makefile
	fi
fi