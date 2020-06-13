#include<stdio.h>
int main(){
int r,s=0,x;
printf("Enter a number:");
scanf("%d",&x);
while(x!=0){
    r=x%10;
    s=s+r;
    x=x/10;
}
printf("Sum of the digits of the  number is : %d",s);
}
