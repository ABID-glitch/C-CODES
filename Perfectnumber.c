#include<stdio.h>
int main(){
int n,i,r,s=0;
printf("Enter a number:");
scanf("%d",&n);

for(i=1;i<=n-1;i++){
    r=n%i;
    if(r==0)
    {
        s=s+i;
    }
}
if(s==n)
    printf("%d is a perfect number",n);

else
    printf("%d is not a perfect number",n);
}
