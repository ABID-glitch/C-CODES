#include<stdio.h>
int sum(int)
int main(){
int k=sum(4);
printf("%d",k);
}
int sum(int a){
int s;
if(a==1)
return(a);
s=a+sum(a-1);
return(s);
}
