#include<stdio.h>
int perfect(int);
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
if(perfect(n))
    printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
}

int perfect(int x){
int i,r,s=0;
for(int i=1;i<=x-1;i++){
    r=x%i;
    if(r==0){
        s=s+i;
    }
}
if(s==x)
    return true;
else
    return false;
}
