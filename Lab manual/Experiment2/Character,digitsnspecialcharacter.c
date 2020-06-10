#include<stdio.h>
int main(){
    char c;
printf("Enter any character");
scanf("%c",&c);
if(c>='a' && c<='z' || c>='A' && c<='Z'){
printf("Character is an alphabet");}
else if(c>='1' && c<='9'){
printf("Character is a digit");}
else
    printf("Special character");
}
