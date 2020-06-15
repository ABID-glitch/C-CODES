#include<stdio.h>
int reverse(int);
int main(){
int a,rev;
printf("Enter a number:");
scanf("%d",&a);
rev=reverse(a);
printf("Reverse number is %d",rev);
}

int reverse(int x){
static int r,s=0;
if(x>0){
    r=x%10;
    s=s*10+r;
    reverse(x/10);
}
else
    return 0;

    return s;
}
