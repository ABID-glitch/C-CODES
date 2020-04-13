#include<stdio.h>
int main(){
    int x,r,s=0,n;
    printf("Armstrong numbers are:");
    for(n=1;n<=1000;n++){
        x=n;
        while(x!=0){
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
        printf(" %d ",n);
    }
}
