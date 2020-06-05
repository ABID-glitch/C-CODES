#include<stdio.h>
int main(){
int a,b,sum,diff,pro;
float div;
printf("Enter 2 numbers:");
scanf("%d %d",&a,&b);
sum=a+b;
diff=a-b;
pro=a*b;
div=a/b;
printf("%d %d %d %f",sum,diff,pro,div);
return 0;
}
