#include<stdio.h>
int arm(int);
int main(){
int x,n;
printf("Enter a number:");
scanf("%d",&n);
if(arm(n))
    printf("%d is Armstrong number",n);
else
    printf("%d is not an Armstrong number",n);


}

int arm(int x){
    int r,s,p;
for(int i=0;i<=x;i++){
    s=0;p=x;
    while(p!=0){
    r=p%10;
    s=s+r*r*r;
    p=p/10;}
}
    if(s==x)
        return true;
    else
        return false;

}
