#include<stdio.h>
int main(){
int amount,rate,time;
float si;

printf("Enter amount rate time");
scanf("%d %d %d",&amount,&rate,&time);
si=(amount*rate*time)/100;
printf("%f",si);
return 0;
}
