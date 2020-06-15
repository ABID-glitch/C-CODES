#include<stdio.h>
int main(){
int x,i,n,r,s;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    s=0;x=n;
    while(x!=0){
        r=x%10;
        s=s+r*r*r;
        x=x/10;
    }
}
    if(s==n)
        printf("%d is Armstrong number",n);
    else
        printf("%d is Not an Armstrong number",n);
}

