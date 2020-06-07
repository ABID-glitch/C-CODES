#include<stdio.h>
#include<string.h>
int main(){
  char s[20];
  int l;
  printf("Enter a string:");
  gets(s);
  strrev(s);
  printf("%s",s);
}
