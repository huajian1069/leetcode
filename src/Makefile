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
		 ./0007-atoi/atoi.o   \
		 ./0008-reverse-integer/inverse.o \

TESTS = HelloWorld \
		two-sum_test \
		add-two-sum_test  \
		length-longest-substring_test \
		median-two-arrays_test \
		atoi_test \
		inverse_test \

all: gtest $(OBJECTS) $(TESTS)

gtest:
	cmake ../googletest-release-1.10.0/CMakeLists.txt -DCMAKE_CXX_STANDARD=17
	make ../googletest-release-1.10.0/

$(OBJECTS): %.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

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
inverse_test: ./0008-reverse-integer/inverse.o 0008-reverse-integer/inverse_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
median-two-arrays_test: ./0004-median-two-arrays/median-two-arrays.o 0004-median-two-arrays/median-two-arrays_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
	
clean:
	rm -f */*.out *_test -r */*.dYSM *.dYSM


	
	
	
	
