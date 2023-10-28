#include<stdio.h>
#include<stdlib.h>
int item,i,loc,flag,;
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
void search(){

struct node *ptr=(struct node *)malloc(sizeof(struct node *));
ptr=head;
if(ptr==NULL){

printf("empty");
}
else
{
printf("enter the item");
scanf("%d",&item);
while(ptr!=NULL){
if(ptr->data==item){
printf("item found at position %d",i+1);
flag=0
}
else{
flag=1;
}
i++;
ptr=ptr->next;
}
}
if(flag==1)
printf("item not found");
}
void main()
{
    while(ch!=4){
    printf("enter the choice:1.insertion at beg 2.insertion at tail 3.insertion at position 4.del at beg 5.del at tail 6.del at pos 7.search");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    insertbeg();
    break;
    case 2:
    insertail();
    break;
    case 3:
    insertpos();
    break;
    case 4:
    delbeg();
    break;
    case 5:
    deltail();
    break;
    case 6:
    delpos();
    break;
    case 7:
    search();
    break;
    }
    }
}
