#include<stdio.h>
int main(){
int a,b,c=0;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
for(int i=1;i<=b;i++){
    c=c+a;
}
printf("Multiplication of %d and %d is %d",a,b,c);
}
