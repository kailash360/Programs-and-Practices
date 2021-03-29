#include <stdio.h>
#include <stdlib.h>

struct node{                   //the strcuture of the linked list
    int data;
    struct node* next;
};

struct node* insert(struct node* head,int data)           //insert function
{
    struct node* ptr=head;
    if(head==NULL)      //checking for empty linked list
    {
        struct node* head=(struct node *)malloc(sizeof(struct node*));
        head->data=data;
        head->next=NULL;
        return head;
    }

    while(ptr->next!=NULL)
    {ptr=ptr->next;}

    struct node* new_node=(struct node *)malloc(sizeof(struct node*));        //creating the new node to be inserted
    new_node->data=data;
    new_node->next=NULL;

    ptr->next=new_node;                  //adding the node to the end of linked list
    return head;
}

void display(struct node* head)          //traversing the linked list
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int n,ele;
    printf("How many data elements to enter?\n->");
    scanf("%d",&n);

    struct node* head=NULL;  
    for(int i=0;i<n;i++)        //inserting elements in linked list
    {
        printf("Give the data element %d:",i+1);
        scanf("%d",&ele);
        head=insert(head,ele);
    }
    
    printf("The linked list is:");        //displaying the linked list
    display(head);

    return 0;
}