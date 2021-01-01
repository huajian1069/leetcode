CC = g++
OPT = -O0 -ggdb -std=c++17
WARN = -Wall -Wno-unused-function -finline-functions
INCPATH = -I. -I../googletest-release-1.10.0/googletest/include
CFLAGS = $(WARN) $(OPT) $(INCPATH)

GTEST = -L../googletest-release-1.10.0/build/googletest/generated/ -lgtest -lgtest_main

OBJECTS = ./basics/HelloWorld.o \
		./0001-two-sum/two-sum.o   \
		./0002-add-two-sum/add-two-sum.o \
		./0003-length-longest-substring/length-longest-substring.o \
		./0004-median-two-arrays.o \
		./0005-longest-palindromic-substring/longest-palindromic-substring.o \
		./0006-zigzag-conversion/zigzag-conversion.o \
		./0007-atoi/atoi.o   \
		./0008-reverse-integer/reverse-integer.o \
		./0006-b-spiral-printing/b-spiral-printing.o \
		./0009-palindrome-number/palindrome-number.o \
		./0010-regular-matching/regular-matching.o \
		./0013-roman-to-integer/roman-to-integer.o \
		./0014-longest-common-prefix/longest-common-prefix.o \
		./0011-container-with-most-water/container-with-most-water.o \
		./codeforce01-bovine-dilemma/bovine-dilemma.o \
		./codeforce02-last-minute-enhancements/last-minute-enhancements.o \
		./0020-valid-parentheses/valid-parentheses.o \

TESTS = HelloWorld \
		two-sum_test \
		add-two-sum_test  \
		length-longest-substring_test \
		median-two-arrays_test \
		atoi_test \
		reverse-integer_test \
		zigzag-conversion_test \
		longest-palindromic-substring_test \
		b-spiral-printing_test \
		palindrome-number_test \
		regular-matching_test \
		roman-to-integer_test \
		longest-common-prefix_test \
		container-with-most-water_test \
		bovine-dilemma_test \
		last-minute-enhancements_test \
		valid-parentheses_test \

all: gtest $(OBJECTS) $(TESTS)

gtest:
	cmake ../googletest-release-1.10.0/CMakeLists.txt -DCMAKE_CXX_STANDARD=17
	make ../googletest-release-1.10.0/

$(OBJECTS): %.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f */*.o *_test -r */*.dYSM *.dYSM
HelloWorld_test: ./basics/HelloWorld.o basics/HelloWorld_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@	
two-sum_test: ./0001-two-sum/two-sum.o 0001-two-sum/two-sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
add-two-sum_test: ./0002-add-two-sum/add-two-sum.o 0002-add-two-sum/add-two-sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
length-longest-substring_test: ./0003-length-longest-substring/length-longest-substring.o 0003-length-longest-substring/length-longest-substring_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
atoi_test: ./0007-atoi/atoi.o 0007-atoi/atoi_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
reverse-integer_test: ./0008-reverse-integer/reverse-integer.o 0008-reverse-integer/reverse-integer_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
median-two-arrays_test: ./0004-median-two-arrays/median-two-arrays.o 0004-median-two-arrays/median-two-arrays_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
zigzag-conversion_test: ./0006-zigzag-conversion/zigzag-conversion.o 0006-zigzag-conversion/zigzag-conversion_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
longest-palindromic-substring_test: ./0005-longest-palindromic-substring/longest-palindromic-substring.o 0005-longest-palindromic-substring/longest-palindromic-substring_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
b-spiral-printing_test: ./0006-b-spiral-printing/b-spiral-printing.o 0006-b-spiral-printing/b-spiral-printing_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
palindrome-number_test: ./0009-palindrome-number/palindrome-number.o 0009-palindrome-number/palindrome-number_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
regular-matching_test: ./0010-regular-matching/regular-matching.o 0010-regular-matching/regular-matching_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
roman-to-integer_test: ./0013-roman-to-integer/roman-to-integer.o 0013-roman-to-integer/roman-to-integer_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
longest-common-prefix_test: ./0014-longest-common-prefix/longest-common-prefix.o 0014-longest-common-prefix/longest-common-prefix_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
container-with-most-water_test: ./0011-container-with-most-water/container-with-most-water.o 0011-container-with-most-water/container-with-most-water_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
bovine-dilemma_test: ./codeforce01-bovine-dilemma/bovine-dilemma.o codeforce01-bovine-dilemma/bovine-dilemma_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
last-minute-enhancements_test: ./codeforce02-last-minute-enhancements/last-minute-enhancements.o codeforce02-last-minute-enhancements/last-minute-enhancements_test.cpp 
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
valid-parentheses_test: ./0020-valid-parentheses/valid-parentheses.o 0020-valid-parentheses/valid-parentheses_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@