#include<stdio.h>
int big(int,int);
int main(){
int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
big(a,b);
}
int big(int x,int y){
if(x>y)
    printf("%d is greater than %d",x,y);
    else
        printf("%d is greater than %d",y,x);

}
