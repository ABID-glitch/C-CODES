#include<stdio.h>
int main(){
int i,x;
printf("Enter the number : ");
scanf("%d",&x);
for(i=2;i<=x-1;i++){
if(x%i==0)
break;
}
if(i==x)
printf("Prime number");
else
printf("Not Prime number");
}
