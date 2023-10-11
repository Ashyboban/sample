#include<stdio.h>
int queue[100],i,rear=-1,front=-1,n,choice=0;
void enqueue()
{
if(rear==n)
printf("overflow");
else
if(front==-1){
front=0;
}
printf("enter the element");
rear=rear+1;
scanf("%d",&queue[rear]);

}
void dequeue()
{

if (front<0||front>rear)
printf("overflow");
else
front=front+1;
}
void display()
{
if(front==-1||rear==-1)
printf("stack is empty");
else{
printf("elements are:");
for(i=front;i<=rear;i++)
printf("%d",queue[i]);
}
}
void main()
{
printf("Enter the size of queue : ");
	scanf("%d", &n);
	 while(choice != 4){
	 	printf("Enter the choice 1 - Enqueue, 2 - Dequeue, 3 - Display, 4 - Exit : ");
	 	scanf("%d", &choice);
	 	switch(choice){
	 		case 1:
	 			enqueue();
	 			break;
	 		case 2:
	 			dequeue();
	 			break;
	 		case 3:
	 			display();
	 			break;
	 		case 4:
	 			printf("Exiting..");
	 			break;
	 	}
	 }
}
