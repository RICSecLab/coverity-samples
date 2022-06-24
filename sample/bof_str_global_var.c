#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 8
char buf[BUFFERSIZE];

int check_passwd(char *passwd){
  int auth_flag = 0;

  strcpy(buf, passwd);
  if(strcmp(buf, "hoge")==0)
    auth_flag = 1;

  return auth_flag;
}

int main(int argc, char *argv[]){
  if(argc != 2){
    printf("Usage: %s <password>\n", argv[0]);
    exit(1);
  }
  if(check_passwd(argv[1]))
    printf("Access Sucsess\n");
  else printf("Access Denied\n");

  return 0;
}