#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a%2)
    printf("%d is an odd number",a);
else
    printf("%d is an even number");
}
