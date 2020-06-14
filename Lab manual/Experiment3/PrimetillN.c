#include<stdio.h>
int main(){
int x=2,i,N;
printf("Enter a number");
scanf("%d",&N);
while(N){
    for(i=2;i<=x;i++)
        if(x%i==0)
            break;
        if(x==i){
            printf("%d ",x);
            N--;
        }
        x++;
}
}
