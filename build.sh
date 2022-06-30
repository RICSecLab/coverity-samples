#!bin/sh

# compile c code
for file in ./src/*.c
do
  gcc -Wall -std=c11 -o ./build/$(basename $file .c) $file
done

# compile c++ code
for file in ./src/*.cpp
do
  g++ -Wall -std=c++11 -o ./build/$(basename $file .cpp) $file
done
