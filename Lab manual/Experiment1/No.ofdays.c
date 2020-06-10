#include<stdio.h>

int main(){
    int n,year,month,days;
    printf("Enter the no. of days: ");
    scanf("%d",&n);
    year=n/365;
    month=(n-year*365)/30;
    days=n-(year*365)-(month*30);
    printf("year: %d\n",year);
    printf("\n month: %d\n",month);
    printf("\n days: %d",days);
return 0;
}
