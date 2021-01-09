# The repository for my algorithm problem practice

Most of the problems are from leetcode, a few are from codeforces, acm-icpc.

There are some Features of this project:

## google unit test
Each problem and solution come with one or more unit test cases. They are used for debugging locally. So it is required to firstly install GoogleTest library. Simply clone this repository WITH GooglTest by `git clone --recursive https://github.com/huajian1069/leetcode`.

## build system
The compiler flag and parameters are written in src/Makefile. You can compile gtest by `make gtest` or compile a solution to problem by `make problem_test`. For example, to compile problem `0015-3sum`, you can type `make 3sum_test`. After that, you will get executable file to run.

## automatically generate duplicated code structure 
`generate-files.sh` file is used to generate a new folder and header, source files with some fixed code structure. It also writes necessary building information for new the problem into Makefile. The usage is `bash generate-files.sh INDEX-PROBLEM-NAME` or `bash generate-files.sh INDEX-PROBLEM-NAME acm`. 

