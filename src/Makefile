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
		./0020-valid-parentheses/valid-parentheses.o \
		./0012-integer-to-roman/integer-to-roman.o \
		./0021-merge-two-sorted-lists/merge-two-sorted-lists.o \
		./acmICPC01-four-segments/four-segments.o \
		./acmICPC02-waste-sorting/waste-sorting.o \
		./0015-3sum/3sum.o \
		./0016-3sum-closet/3sum-closet.o \
		./0017-letter-combinations-of-a-phone-number/letter-combinations-of-a-phone-number.o \
		./0018-4sum/4sum.o \
		./0019-remove-nth-node-from-end-of-list/remove-nth-node-from-end-of-list.o \
		./0022-generate-parentheses/generate-parentheses.o \
		./0024-swap-nodes-in-pairs/swap-nodes-in-pairs.o \
		./0023-merge-k-sorted-lists/merge-k-sorted-lists.o \
		./codeforces01-bovine-dilemma/bovine-dilemma.o \
		./codeforces02-last-minute-enhancements/last-minute-enhancements.o \
		./codeforces03-replacing-elements/replacing-elements.o \
		./codeforces04-string-lcm/string-lcm.o \
		./0026-remove-duplicates-from-sorted-array/remove-duplicates-from-sorted-array.o \
		./0027-remove-element/remove-element.o \
		./0028-implement-strstr/implement-strstr.o \
		./0035-search-insert-position/search-insert-position.o \
		./codeforces05-no-more-inversions/no-more-inversions.o \
		./codeforces06-program/program.o \
		./0038-count-and-say/count-and-say.o \
		./0025-reverse-nodes-in-k-group/reverse-nodes-in-k-group.o \
		./0029-divide-two-integers/divide-two-integers.o \
		./0031-next-permutation/next-permutation.o \
		./0033-search-in-rotated-sorted-array/search-in-rotated-sorted-array.o \
		./0050-pow/pow.o \
		./0036-valid-sudoku/valid-sudoku.o \
		./0034-find-first-and-last-position/find-first-and-last-position.o \
		./0039-combination-sum/combination-sum.o \
		./0040-combination-sum2/combination-sum2.o \
		./0053-maximum-subarray/maximum-subarray.o \

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
		integer-to-roman_test \
		merge-two-sorted-lists_test \
		four-segments_test \
		waste-sorting_test \
		3sum_test \
		3sum-closet_test \
		letter-combinations-of-a-phone-number_test \
		4sum_test \
		remove-nth-node-from-end-of-list_test \
		generate-parentheses_test \
		swap-nodes-in-pairs_test \
		merge-k-sorted-lists_test \
		replacing-elements_test \
		string-lcm_test \
		remove-duplicates-from-sorted-array_test \
		remove-element_test \
		implement-strstr_test \
		search-insert-position_test \
		no-more-inversions_test \
		program_test \
		count-and-say_test \
		reverse-nodes-in-k-group_test \
		divide-two-integers_test \
		next-permutation_test \
		search-in-rotated-sorted-array_test \
		pow_test \
		valid-sudoku_test \
		find-first-and-last-position_test \
		combination-sum_test \
		combination-sum2_test \
		maximum-subarray_test \
		
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
valid-parentheses_test: ./0020-valid-parentheses/valid-parentheses.o 0020-valid-parentheses/valid-parentheses_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
integer-to-roman_test: ./0012-integer-to-roman/integer-to-roman.o 0012-integer-to-roman/integer-to-roman_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
merge-two-sorted-lists_test: ./0021-merge-two-sorted-lists/merge-two-sorted-lists.o 0021-merge-two-sorted-lists/merge-two-sorted-lists_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
four-segments_test: ./acmICPC01-four-segments/four-segments.o acmICPC01-four-segments/four-segments_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
waste-sorting_test: ./acmICPC02-waste-sorting/waste-sorting.o acmICPC02-waste-sorting/waste-sorting_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
3sum_test: ./0015-3sum/3sum.o 0015-3sum/3sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
3sum-closet_test: ./0016-3sum-closet/3sum-closet.o 0016-3sum-closet/3sum-closet_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
letter-combinations-of-a-phone-number_test: ./0017-letter-combinations-of-a-phone-number/letter-combinations-of-a-phone-number.o 0017-letter-combinations-of-a-phone-number/letter-combinations-of-a-phone-number_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
4sum_test: ./0018-4sum/4sum.o 0018-4sum/4sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
remove-nth-node-from-end-of-list_test: ./0019-remove-nth-node-from-end-of-list/remove-nth-node-from-end-of-list.o 0019-remove-nth-node-from-end-of-list/remove-nth-node-from-end-of-list_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
generate-parentheses_test: ./0022-generate-parentheses/generate-parentheses.o 0022-generate-parentheses/generate-parentheses_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
swap-nodes-in-pairs_test: ./0024-swap-nodes-in-pairs/swap-nodes-in-pairs.o 0024-swap-nodes-in-pairs/swap-nodes-in-pairs_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
merge-k-sorted-lists_test: ./0023-merge-k-sorted-lists/merge-k-sorted-lists.o 0023-merge-k-sorted-lists/merge-k-sorted-lists_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
replacing-elements_test: ./codeforces03-replacing-elements/replacing-elements.o codeforces03-replacing-elements/replacing-elements_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
string-lcm_test:./codeforces04-string-lcm/string-lcm.o codeforces04-string-lcm/string-lcm_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
last-minute-enhancements_test:./codeforces02-last-minute-enhancements/last-minute-enhancements.o codeforces02-last-minute-enhancements/last-minute-enhancements_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
bovine-dilemma_test: ./codeforces01-bovine-dilemma/bovine-dilemma.o codeforces01-bovine-dilemma/bovine-dilemma_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
remove-duplicates-from-sorted-array_test: ./0026-remove-duplicates-from-sorted-array/remove-duplicates-from-sorted-array.o 0026-remove-duplicates-from-sorted-array/remove-duplicates-from-sorted-array_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
remove-element_test: ./0027-remove-element/remove-element.o 0027-remove-element/remove-element_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
implement-strstr_test: ./0028-implement-strstr/implement-strstr.o 0028-implement-strstr/implement-strstr_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
search-insert-position_test: ./0035-search-insert-position/search-insert-position.o 0035-search-insert-position/search-insert-position_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
no-more-inversions_test: ./codeforces05-no-more-inversions/no-more-inversions.o codeforces05-no-more-inversions/no-more-inversions_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
program_test: ./codeforces06-program/program.o codeforces06-program/program_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
count-and-say_test: ./0038-count-and-say/count-and-say.o 0038-count-and-say/count-and-say_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
reverse-nodes-in-k-group_test: ./0025-reverse-nodes-in-k-group/reverse-nodes-in-k-group.o 0025-reverse-nodes-in-k-group/reverse-nodes-in-k-group_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
divide-two-integers_test: ./0029-divide-two-integers/divide-two-integers.o 0029-divide-two-integers/divide-two-integers_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
next-permutation_test: ./0031-next-permutation/next-permutation.o 0031-next-permutation/next-permutation_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
search-in-rotated-sorted-array_test: ./0033-search-in-rotated-sorted-array/search-in-rotated-sorted-array.o 0033-search-in-rotated-sorted-array/search-in-rotated-sorted-array_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
pow_test: ./0050-pow/pow.o 0050-pow/pow_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
valid-sudoku_test: ./0036-valid-sudoku/valid-sudoku.o 0036-valid-sudoku/valid-sudoku_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
find-first-and-last-position_test: ./0034-find-first-and-last-position/find-first-and-last-position.o 0034-find-first-and-last-position/find-first-and-last-position_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
combination-sum_test: ./0039-combination-sum/combination-sum.o 0039-combination-sum/combination-sum_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
combination-sum2_test: ./0040-combination-sum2/combination-sum2.o 0040-combination-sum2/combination-sum2_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
maximum-subarray_test: ./0053-maximum-subarray/maximum-subarray.o 0053-maximum-subarray/maximum-subarray_test.cpp
	$(CC) $(CFLAGS) $(GTEST) $^ -o $@
