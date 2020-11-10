#include<stdio.h>
int main(){
int x;
printf("%p",&x);
return 0;
}

* One more operator is * unary operator :
1. #include<stdio.h>
int main(h ){
  int x=5;
  int *ptr; //* operator is used to declare a pointer in C/C++
  printf("Address : %d",&x);
  return 0;
}

2. To use the ptr variable which will return the value of a variable at an address called as deferencing
#include<stdio.h>
int main(){
  int x=10;
  int *ptr;
  ptr=&x; //assign the address in the ptr variable of x variable

  printf("Value : %d",*ptr); //prints the value of x variable
  printf("Address : %p",ptr); //prints the address of x variable

  *ptr = 20;
  printf("New value is : ",*ptr); //* is used to display values
  return 0;
}

// & an * operators are used simultaneously

* Pointer Expressions and Arithemtics :
#include<stdio.h>
int main(int argc[],char const * argv[]){
  int x[3] = {10,100,200};
  int *ptr;
  ptr = x; //or &x[0]//array doesn't take & operator  //Assigning the address of x[0] to ptr variable

  for(int i=0;i<3;i++){
  printf("Value : %d\n",*ptr);
  printf("Address : %p\n",ptr);
}
return 0;
}

* Array Name as Pointers :
#include<stdio.h>
int main(){
  int x[3] = {10,20,30};
  int *ptr;
  ptr = x;
  printf("Elements in the array are : %d %d %d",ptr[0],ptr[1],ptr[2]); //* is used on array
  return 0;
}
