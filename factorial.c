#include<stdio.h>
int main(){
int n,f=1,x;
printf("Enter the number:");
scanf("%d",&n);
x=n;
while(n>=1){
f=f*n;
n--;
}
printf("The factorial of %d is %d",x,f);
}
