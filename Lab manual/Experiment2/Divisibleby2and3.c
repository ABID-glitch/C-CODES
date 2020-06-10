#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a%2==0 && a%3==0)
    printf("Divisible by 2 and 3");
else
    printf("Not divisible by 2 or 3");
}
