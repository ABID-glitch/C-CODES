#include<stdio.h>
int main(){
int x,r,y=0,n;
printf("Enter a number:");
scanf("%d",&x);
n=x;
while(x!=0){
    r=x%10;
    y=y*10+r;
    x=x/10;
    }

if(y==n){
    printf("Palindrome number");
}
else{
    printf("Not a palindrome number");
}
}

