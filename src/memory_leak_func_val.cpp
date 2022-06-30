#include<cstdio>
#include<cstdlib>
#include<iostream>

#define BUFFERSIZE 64

class MyClass {
public:
  void allocate_buf(size_t size);
  MyClass() {
    std::cout << "MyClass' constructor is called." << std::endl;
  }
  ~MyClass() {
    std::cout << "MyClass' destructor is called." << std::endl;
  }
};

void MyClass::allocate_buf(size_t size) {
  int *array = new int[size];
  printf("%p\n", array); // disable Dead Store
  // delete[] array;
  return;
}

int main() {
  MyClass* mc = new MyClass();
  mc->allocate_buf(BUFFERSIZE);
  delete mc;
  return 0;
}