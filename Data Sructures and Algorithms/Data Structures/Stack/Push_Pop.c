#include <stdio.h>
#include <stdlib.h>

struct stack{
  int size;
  int top;
  int *arr;
};

int isEmpty(struct stack* s)
{
  if(s->top==-1)
  {return 1;}
  else
  {return 0;}
}

int isFull(struct stack* s)
{
  if(s->top==s->size-1)
  {return 1;}
  else
  {return 0;}
}

void push(struct stack* s,int data)
{
  if(isFull(s))
  {printf("Stack Overflow! Cannot push %d into stack..",data);}
  else
  {s->arr[++s->top]=data;}
}

int pop(struct stack* s)
{
  if(isEmpty(s))
  {printf("Stack Underflow! Cannot pop from stack..");}
  else
  {return s->arr[s->top--];}
}

void display(struct stack* s)
{
  printf("The stack is:");
  if(s->top==-1)
  {printf("Empty!!");}
  else
  {
    for(int i=0;i<=s->top;i++)
    {printf("%d ",s->arr[i]);}
  }
  printf("\n");
}

int main()
{
  struct stack* s1=(struct stack*)malloc(sizeof(struct stack));
  s1->size=100;
  s1->top=-1;
  s1->arr=(int *)malloc(s1->size * sizeof(int));

  printf("//STACK OPERATIONS//\n");
  display(s1);
  pop(s1);
  push(s1,1);
  push(s1,3);
  push(s1,5);
  push(s1,7);
  push(s1,9);
  printf("After pushing..\n");
  display(s1);
  int x=pop(s1);
  printf("After popping..\n");
  printf("Popped element:%d\n",x);
  display(s1);
  return 0;
}

s