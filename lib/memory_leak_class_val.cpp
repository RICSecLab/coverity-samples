#include<cstdio>
#include<cstdlib>
#include<iostream>

#define BUFFERSIZE 64

class MyClass {
public:
  MyClass() {
    std::cout << "MyClass' constructor is called." << std::endl;
    buf = new int[BUFFERSIZE];
  }

  ~MyClass() {
    std::cout << "MyClass' destructor is called." << std::endl;
    // if not, memory leak
    // if(this->buf != NULL) {
    //   delete[] this->buf;
    // }
  }
private:
  int *buf;
};

void memory_leak_class_val() {
  MyClass* mc = new MyClass();
  delete mc;
}