#include<stdio.h>
int main(){
int i,n;
float s=0;
printf("Enter the length : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    s=s+(float)1/i;

    if(i==1)
        printf("1 +");
    else if(i==n)
        printf("1/%d =",i);
    else
        printf("1/%d +",i);
}
printf("%f",s);
}
