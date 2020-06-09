#include<stdio.h>
int main(){
    float F,C,K;
    printf("Enter Temperature in celsius:");
    scanf("%f",&C);
    F=(C*(1.8))+32;
    printf("%f",F);
    printf("\n");
    printf("Enter Temperature in celsius:");
    scanf("%f",&C);
    K=C+273.15;
    printf("%f",K);
}
