#include<stdio.h>
int main(){
  int x;
  printf("Enter number:");
  scanf("%d",&x);
  if(x&1){                               
    printf("ODD NUMBER");}                                       
    else                                                         
    printf("EVEN NUMBER");                                    
    return 0;                                                    
}
