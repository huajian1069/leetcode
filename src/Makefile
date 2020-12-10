CC = g++
OPT = -O0 -ggdb -std=c++17
WARN = -Wall -Wno-unused-function -finline-functions
INCPATH = -I. -I../googletest-release-1.10.0/googletest/include
CFLAGS = $(WARN) $(OPT) $(INCPATH)

GTEST = -L../googletest-release-1.10.0/build/googletest/generated/ -lgtest -lgtest_main

OBJECTS = ./0008-reverse-integer/inverse.o

TESTS = inverse_test

all: gtest $(OBJECTS) $(TESTS)

gtest:
	rm -r ../googletest-release-1.10.0/build
	mkdir ../googletest-release-1.10.0/build
	cd ../googletest-release-1.10.0/build
	cmake .. -DCMAKE_CXX_STANDARD=17
	make -C 
	cd ../src

$(OBJECTS): %.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

inverse_test: ./0008-reverse-integer/inverse.o 0008-reverse-integer/inverse_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@

clean:
	rm -f */*.out *_test -r */*.dYSM *.dYSM


	
	
	
	
