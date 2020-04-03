#include<stdio.h>
void bin_search(int L[],int N,int item);
int main(){
    int A[]={3,54,33,46,8,75,88};
    int item=88;
    bin_search(A,7,item);
}
void bin_search(int L[],int N,int item){
    int l=0,u=N-1,m;
    while(l<=u){
        m=(l+u)/2;
        if(item=L[m]){
            printf("Search successful at index %d,item found",m);
            return;

        }
    else if(item>L[m])
    l=m+1;
    else
    u=m-1;
}
}
