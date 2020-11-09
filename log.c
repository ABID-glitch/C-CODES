#include<stdio.h>
#include<math.h>
int main(){
    float value;
    float result;
    printf("Enter a number : ");
    scanf("%f",&value);
    
    result=log10(value);
    printf("Log value of %f is %f",value,result);
    return 0;
}
