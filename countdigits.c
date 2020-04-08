#include<stdio.h>
int main(){
int x,count=0;
printf("Enter the number to be count");
scanf("%d",&x);
while(x!=0){
x=x/10;
count++;
}
printf("Count digits: %d",count);
}
