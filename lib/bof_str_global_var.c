#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* This sample is based on auth_overflow.c from https://www.oreilly.co.jp/pub/9784873115146/HackingJ.zip */

#define BUFFERSIZE 8
char buf[BUFFERSIZE];

int check_passwd_for_bof_str_global_var(char *passwd){
  int auth_flag = 0;

  strcpy(buf, passwd);
  if(strcmp(buf, "hoge")==0)
    auth_flag = 1;

  return auth_flag;
}

void bof_str_global_var(char *input){
  if(check_passwd_for_bof_str_global_var(input))
    printf("Access Sucsess\n");
  else printf("Access Denied\n");
}