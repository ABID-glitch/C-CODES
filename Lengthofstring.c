#include<stdio.h>
#include<string.h>

int main(){
char s[20];
int l;
printf("Enter your name:");
gets(s);
l=strlen(s); //will return the length of the string
printf("Length of %s is %d",s,l);
}
