#include<stdio.h>
int pr(int);
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
if(pr(n))
    printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}

int pr(int x){
    int i;
for(int i=2;i<=x-1;i++){
    if(x%i==0)
        break;
}
    if(i==x)
        return true;
    else
        return false;

}
