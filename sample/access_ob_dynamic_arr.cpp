#include<stdio.h>
#include<vector>
#include<iostream>

#define BUFFERSIZE 8

int main(int argc, const char *argv[]) {
  std::vector<int> vec(BUFFERSIZE, 0);
  std::cout << vec[BUFFERSIZE + 1] << std::endl;
  return 0;
}
