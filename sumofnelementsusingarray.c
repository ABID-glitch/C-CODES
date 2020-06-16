#include<stdio.h>
int main(){
int s=0,arr[5];
printf("Enter the numbers : ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    s=s+arr[i];
}
printf("%d",s);
}
