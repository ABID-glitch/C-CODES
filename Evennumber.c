#include<stdio.h>
int main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n%2==0){
    printf("EVEN NUMBER");
  }
  else
  printf("NOT EVEN NUMBER");
  return 0;
}
