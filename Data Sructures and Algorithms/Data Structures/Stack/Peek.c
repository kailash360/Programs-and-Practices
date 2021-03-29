#include <stdio.h>
#include <stdlib.h>

struct stack{
  int size;
  int top;
  int *arr;
};

int peek(struct stack* s,int pos)
{
    if(s->top==-1)
    {
        printf("Cannot Peek!! Empty stack..\n");
        return -1;
    }
    else if(s->top<pos-1)
    {
        printf("Cannot Peek at position %d!!Only %d elements present..\n",pos,s->top+1);
        return -1;
    }
    else
    {
        printf("Peeked element at position %d is:%d\n",pos,s->arr[pos-1]);
        return s->arr[pos-1];
    }
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

  display(s1);
  peek(s1,1);

  printf("After pushing..\n");
  s1->arr[0]=1;s1->top++;
  s1->arr[1]=3;s1->top++;
  s1->arr[2]=5;s1->top++;
  s1->arr[3]=7;s1->top++;
  s1->arr[4]=9;s1->top++;
  s1->arr[5]=11;s1->top++;
  s1->arr[6]=13;s1->top++;

  display(s1);
  peek(s1,1);
  peek(s1,8);

  return 0;
}

