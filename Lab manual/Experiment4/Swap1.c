#include<stdio.h>
void swap(int *,int *);
int main(){
    int x,y;
printf("Enter two numbers");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("x=%d and y=%d",x,y);
}

void swap(int *a,int *b){
int t;
t=*a;
*a=*b;
*b=t;
}
