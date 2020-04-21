#include <stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=c+i;
    }
    printf(" Sum is %d",c);
}
