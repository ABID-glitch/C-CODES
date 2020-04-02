#include<stdio.h>
int main(){
  printf("Enter the value of n = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("%d", 2*i-1);
  }
  return 0;
}
