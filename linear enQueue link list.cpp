#include<stdio.h>
#include<stdlib.h>
typedef struct link{
	int data;
	struct link *next;
}node;
node*rear=NULL,*front=NULL;
void enQueue(int x)
{
	node*temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->next=NULL;
	if(rear==NULL)
	{
		front=rear=temp;
	}
	rear->next=temp;
	rear=temp;
}
int deQueue()
{
	if(front==NULL)
	{
		printf("\n front is empty");
		return -1;
	}
	node*temp=front;
	front=front->next;
	int x=temp->data;
	free(temp);
	return x;
}
void displayQueue()
{
	for(node*i=front;i!=NULL;i=i->next)
	{
		printf("%d",i->data);
		
	}
}
int main()
{
int x,c;
    while(1){
	printf("\n press 1 to enqueue");
	printf("\n press 2 to delect");
	printf("\n press 3 to display");
	printf("\n press 4 to exit");
	scanf("%d",&x);
	switch(x)
	{
		case 1: 
			printf("enter value to insert");
			scanf("%d",&c);
			enQueue(c);
			break;
		case 2:
			c=deQueue();
			printf("\n delect element is %d",c);
			break;
		case 3:
			displayQueue();
			break;
		case 4:
			exit(0);		
	}
}
}
