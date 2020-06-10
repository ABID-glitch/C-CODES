#include<stdio.h>
int main(){
  int a,b,c,k;
  printf("Enter numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b){
    if(a>c)
    k=a;
    else
    k=c;
  }
  else{
    if(b>c)
    k=b;
    else
    k=c;
  }
  printf("%d",k);
}
--------------------------------------------------------------------------------
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && a>c)
  printf("%d",a);
  if(b>a && b>c)
  printf("%d",b);
  if(c>a && c>b)
  printf("%d",c);
}
--------------------------------------------------------------------------------
#include<stdio.h>
int main(){
  int a,b,c,k;
  printf("Enter numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && a>c)
  k=a;
  if(b>a && b>c)
  k=b;
  if(c>a && c>b)
  k=c;
  printf("%d",k);
}
--------------------------------------------------------------------------------

#include<stdio.h>
int main(){
  int a,b,c,k;
  printf("Enter numbers:");
  scanf("%d %d %d",&a,&b,&c);
  k=a>b ?a>c?a:c :b>c?b:c;
  printf("%d",k);
}
