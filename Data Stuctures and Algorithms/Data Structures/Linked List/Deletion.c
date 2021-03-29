#include <stdio.h>
#include <stdlib.h>

typedef struct node{                   //the strcuture of the linked list and type is node
    int data;
    struct node* next;
} node;

node* insert(node* head,int data)           //insert function
{
    node* ptr=head;
    if(head==NULL)      //checking for empty linked list
    {
        node* head=(node *)malloc(sizeof(node*));
        head->data=data;
        head->next=NULL;
        return head;
    }

    while(ptr->next!=NULL)
    {ptr=ptr->next;}

    node* new_node=(node *)malloc(sizeof(node*));        //creating the new node to be inserted
    new_node->data=data;
    new_node->next=NULL;

    ptr->next=new_node;         //adding the node to the end of linked list
    return head;
}

node* delete(node* head,int position)
{
    node* ptr=head;
    if(head==NULL)              //check for underflow
    {
        printf("\nCannot delete,linked list already empty\n");
        return head;
    }

    if(position==0)             //deletion of head node
    {
        head = head->next;
        return head;
    }

    if(position==-1)            //deletion for tail node
    {
        while(ptr->next->next!=NULL)
        {ptr=ptr->next;}

        free(ptr->next);
        ptr->next=NULL;
        return head;
    }

    position--;
    while(position--)           //deletion of a node at given index
    {ptr=ptr->next;}
    node* temp=ptr->next->next;
    free(ptr->next);
    ptr->next=temp;
    return head;
}

void display(node* head)          //traversing the linked list
{
    printf("\nThe linked list is:");
    node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main()
{
    node* head=NULL;  
    display(head);
    printf("\nDeleting when linked list is empty:");
    head=delete(head,0);             //deleting when linked list is empty

    printf("\nInserting elements..");
    head=insert(head,10);
    head=insert(head,20);
    head=insert(head,30);
    head=insert(head,40);
    head=insert(head,50);        
    head=insert(head,60);        
    display(head);  

    printf("\nDeleting head node:");
    head=delete(head,0);               //deleting head node
    display(head); 
 
    printf("\nDeleting tail node:");
    head=delete(head,-1);              //deleting tail node
    display(head); 

    int pos;                      //deleting as per user input
    printf("\nGive the index to delete the node(-1 for tail node):");
    scanf("%d",&pos);
    head=delete(head,pos);
    display(head);      

    return 0;
}