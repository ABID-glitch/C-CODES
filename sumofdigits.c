#include<stdio.h>
int main(){
  int x,r,x,s=0;
  printf("Enter numbers:");
  scanf("%d",x);
  while(x!=0){
  r=x%10;
  s=s+r;
  x=x/10;
}
printf("sum of digits=%d",s);
return 0;
}
