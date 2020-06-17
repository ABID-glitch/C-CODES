#include<stdio.h>
int sum(int[],int);
int main(){
int n;
int arr[5];
printf("Enter the limit : ");
scanf("%d",&n);
printf("Enter %d numbers",n);
for(int i=0;i<=4;i++){
    scanf("%d",&arr[i]);
}
printf("%d",sum(arr,n-1));
}
int sum(int arr[5],int n){
if(n!=-1){
    return(arr[n]+sum(arr,n-1));}
    else
        return(0);

}
