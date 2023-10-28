#include<stdio.h>
void queueEnqueue(int data)
{

	if (n == rear) {
		printf("\nQueue is full\n");
		return;
	}


	else {
		a[rear] = data;
		rear++;
	}
	return;
}
void queueDequeue(int data)
{

	if (front==-1||front>rear) {
		printf("underflow");
		return;
	}
	else
	printf("deleted element is %d"a[front]);
	front=front+1;
		
}
display()
{
for(i=front;i<rear;i++)
{

printf("%d",a[i]);


}

void main()
{
int n,rear=-1,front=-1,a[100];

printf("enter the size of array:");
scanf("%d",&n);
queueEnqueue();
queueDequeue();
}


