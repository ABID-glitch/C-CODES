* Element can be inserted or deleted at one end called as top of the stack
* STACK CAN BE IMPLEMENTED AS:
1. Arrays
2. Dynamic Arrays
3. inked list

* Procedure for pushing an element into the stack:
PUSH(STACK,TOP,MAXSTK,ITEM)
STACK: Which stack it is
TOP: Topmost Element
MAXSTK: The top index of the stack
ITEM: Which element is to be inserted

1. If TOP==MAXSTK,then print OVERFLOW and return
2. else
3. TOP=TOP+1 // if the topmost index in which element is there is 2(index) so to insert the element we have to increement
4. STACK[TOP]=ITEM //STACK IS THE NAME OF THE ARRAY
5. return

* Procedure for popping an element from the stack:
POP(STACK,TOP,ITEM)

1. If TOP==-1 the print underflow and return
2. else
3. ITEM=STACK[TOP]
4. TOP=TOP-1
5. return

// A strcture to represent a stack:
struct Arraystack{
  in top;
  unsigned capacity;
  int* array; 
}
-------------------------------------------------------------------------------
//  Stack implementation through array:
// 1. Create stackfunction:
#include<stdio.h>
#include<stdlib.h>
struct arraystack{
int top;
int capacity;
int *array;
};
struct arraystack* createstack(int cap){ 
struct arraystack *stack;
stack=malloc(sizeof(struct arraystack)); 
stack->capacity=cap;
stack->top=-1;
stack->array=malloc(sizeof(int)*stack->capacity); 
return(stack);
}

// 2. If stackisfull:
int isfull(struct arraystack *stack) 
{
   if(stack->top==stack->capacity-1)
        return(1);
   else
    return(0);
}

//3. If stackisempty:
int isempty(struct arraystack *stack){
if(stack->top==-1)
    return(1);
    else
        return(0);
}

//4. push:
void push(struct arraystack *stack,int ITEM){
if(!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top]=ITEM; 

    }
}

//5. pop:
int pop(struct arraystack *stack){
int item;
if(!isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    return(-1);
}

int main(){
int choice,item;
struct arraystack *stack;
stack=createstack(4);
while(1) 
    {
      printf("\n1. push");
      printf("\n2. pop");
      printf("\n3. Exit"); 
      printf("Enter your choice");
      scanf("%d",&choice);

      switch(choice){
      case 1: printf("\n Enter a number");
              scanf("%d",&item);
              push(stack,item);break;
      case 2:
               item=pop(stack);
               if(item==-1)
                printf("stack is empty");
                else
               printf("popped value : %d",item);break;
      case 3:
                exit(0);
    }
    getch();
}
}
