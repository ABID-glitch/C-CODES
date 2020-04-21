#include<stdio.h>
int sum(int);
int main(){
    printf("Sum of 10 natural numbers is %d:",sum(10));
}
int sum(int n){
    if(n==1)
    return(1);
    else
    return(n+sum(n-1));
    
}
