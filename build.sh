#!bin/sh

# compile c code
for file in ./src/*.c
do
  cov-build --dir ./build/$(basename $file .c) gcc -Wall -std=c11 $file
done

# compile c++ code
for file in ./src/*.cpp
do
  cov-build --dir ./build/$(basename $file .cpp) g++ -Wall -std=c++11 $file
done
