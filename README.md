# The repository for my algorithm problem practice

Most of the problems are from [leetcode](https://leetcode.com/problemset/all/), a few are from [codeforces(including acm-icpc)](https://codeforces.com/contests). My solutions were written in C++. 

The correctness of my solutions are ensured by 
- passing several test cases:  myFunction(inputs) == expected outputs.
- accepted by the online judging system, so they are guaranteed to respect the time and memory space constraints.
so you can use my solutions as reference. Most of the solution are above the average performance. It is quite encouraging to see my submission beats 90% of all cpp submissions. 

There are some features of this project:

## google unit test: local OJ
Each problem and solution come with one or more unit test cases. They are used for debugging locally. So it is required to firstly install GoogleTest library. Simply clone this repository WITH GooglTest by `git clone --recursive https://github.com/huajian1069/leetcode`.

## home-made build system: no need of IDE
The compiler flag and parameters are written in src/Makefile. You can compile gtest by `make gtest` or compile a solution to problem by `make problem_test`. For example, to compile problem `0015-3sum`, you can type `make 3sum_test`. After that, you will get the executable to run. See detail in [Makefile](src/Makefile)

## saving human efforts: automatically generate duplicated code structure 
`generate-files.sh` file is used to generate a new folder and header, source files with some fixed code structure. It also writes necessary building information for new the problem into Makefile. The usage is `bash generate-files.sh INDEX-PROBLEM-NAME` or `bash generate-files.sh INDEX-PROBLEM-NAME acm`. See detail in [generate-files.sh](src/generate-files.sh)

