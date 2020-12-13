CC = g++
OPT = -O0 -ggdb -std=c++17
WARN = -Wall -Wno-unused-function -finline-functions
INCPATH = -I. -I../googletest-release-1.10.0/googletest/include
CFLAGS = $(WARN) $(OPT) $(INCPATH)

GTEST = -L../googletest-release-1.10.0/build/googletest/generated/ -lgtest -lgtest_main

OBJECTS = ./0008-reverse-integer/inverse.o \
		 ./0001-two-sum/two-sum.o   \
		 ./0002-add-two-sum/add-two-sum \
		 ./0003-length-longest-substring

TESTS = inverse_test \
		two-sum_test \
		add-two-sum  \
		length-longest-substring


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
two-sum_test: ./0001-two-sum/two-sum.o 0001-two-sum/two-sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
add-two-sum_test: ./0002-add-two-sum/add-two-sum.o 0002-add-two-sum/add-two-sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
length-longest-substring_test: ./0003-length-longest-substring/length-longest-substring.o 0003-length-longest-substring/length-longest-substring_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@

clean:
	rm -f */*.out *_test -r */*.dYSM *.dYSM


	
	
	
	
