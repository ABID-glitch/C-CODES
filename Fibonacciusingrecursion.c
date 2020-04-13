#include<stdio.h>
int fib(int);
int main(){
int n;
printf("Enter the terms you want to see:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
printf(" %d ",fib(i));
}
int fib(int n){
if(n==1||n==2)
return(1);
else 
return(fib(n-1)+fib(n-2));
}
