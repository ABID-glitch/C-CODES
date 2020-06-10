#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d;
float x,y;
printf("Enter the coefficients of x^2,x and constant terms");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;

if(d<0)
    printf("Roots are imaginary");

    if(d==0){
        printf("Both roots are equal");
        x=-b/(2.0*a);
        printf("Roots are %f",x);
    }
    if(d>0){
        printf("Both roots are distinct and real");
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("Roots are %f and %f",x,y);
        }
}
