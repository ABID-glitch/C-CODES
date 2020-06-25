#include<stdio.h>
int main(){
int A[3][3],B[3][3],C[3][3],i,j;
printf("Enter 9 number to add for the first matrix : ");
for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
        scanf("%d",&A[i][j]);

printf("Enter 9 numbers to add for the second matrix : ");
for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)1
        scanf("%d",&B[i][j]);
printf("Sum of matrix is : \n");
for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        C[i][j]=A[i][j]+B[i][j];
        printf("%d",C[i][j]);
    }
    printf("\n");
}
}
