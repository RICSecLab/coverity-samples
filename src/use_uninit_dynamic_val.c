#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 10

int main(){
    int* arr = (int*)malloc(sizeof(int) * BUFFERSIZE);
    printf("%d\n", arr[0] + arr[1]);
    return 0;
}