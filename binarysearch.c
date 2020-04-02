#include<stdio.h>
void seq_search(int L[],int N,int ITEM){
  int Flag=1,k;
  for(k=1;k<=N-1;k++){
    if(L[k]==ITEM){
      Flag=0;
      printf("Search successful");
      }
    }
    if(Flag==1)
      printf("Search unsuccessful");
  }

int main(){
  int A[]={2,3,5,8,99,45,23,65,1};
  seq_search(A,9,99);
}
