#include<stdio.h>
#include<stdlib.h>
int item,i,loc;
struct node{
    int data;
    struct node *next;
}*head,*temp; 

void insertbeg()
{
struct node *ptr=(struct node *)malloc(sizeof(struct node *));

if(ptr==NULL){
    printf("overflow");

}
else
{ printf("enter the item");
        scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    printf("node inserted at head");
}
}
void insertail(){
    struct node *ptr=(struct node *)malloc(sizeof(struct node *));

    if(ptr==NULL){
        printf("overflow");
    }
    else if(head==NULL){
        printf("enter the item");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=NULL;
        head=ptr;
        printf("node inserted");
    }
    else
    {
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
        printf("node inserted at tail");
        
    }
}
void insertpos()
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node *));

    if(ptr==NULL){
        printf("overflow");
    }
    else
    printf("enter the location");
    scanf("%d",&loc);\
     printf("enter the item");
        scanf("%d",&item);
    ptr->data=item;
    temp=head;
    for ( i = 0; i < loc; i++)
    {
       temp=temp->next;
       if (temp==NULL)
       printf("cant perform");
       ptr->next=temp->next;
       temp->next=ptr;
       printf("node inserted at position");
    }
    
}
void delbeg(){
        struct node *ptr=(struct node *)malloc(sizeof(struct node *));
ptr=head;
head=ptr->next;
free(ptr);
printf("node delteed");
}
void deltail()
{
     struct node *ptr=(struct node *)malloc(sizeof(struct node *));

    ptr=head;
    while(ptr!=NULL)
    {
        ptr1=ptr;
        ptr->next;
    }
    ptr1->next=NULL;
    free(ptr);
    printf("node deleted at tail")
}
void delpos()
{
        struct node *ptr=(struct node *)malloc(sizeof(struct node *));
ptr=head;
for ( i = 0; i < loc; i++)
{
    ptr1=ptr;
 ptr=ptr->next;
 ptr->next=ptr->next;
 free(ptr);
 printf("delete node at position");

}

    
}
void main()
{
    insertbeg();
    insertail();
    insertpos();
    delbeg();
}
