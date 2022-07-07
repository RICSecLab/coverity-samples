#include<stdio.h>
#include<vector>
#include<iostream>

#define BUFFERSIZE 8

void access_ob_dynamic_arr() {
  std::vector<int> vec(BUFFERSIZE, 0);
  std::cout << vec[BUFFERSIZE + 1] << std::endl;
}
