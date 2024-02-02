//Circular Queue implementation using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
  int CQ[MAX];
  int rear=-1,front=-1;
void enQueue(int x)
{
	
	if(front==(rear+1)%MAX)
	{
	   printf("\n Queue is full");
	   return;
	}
    else if(front==-1)
	{
		front=0;
	}
	
	
		rear=(rear+1)%MAX;
		CQ[rear]=x;
	
}
int deQueue()
{
	if(front==-1)
	{
		printf("\n Queue is empty");
		return -1;
	}
	int x =CQ[front];
    if(rear==front)
	{
	rear=front=-1;
   }
   else
   {
   	front=(front+1)%MAX;
   }
   return x;
}
void displayQueue()
{ 
    int i;
	for(i=front;i!=rear;i=(i+1)%MAX)
	{
		printf("%d ",CQ[i]);
		
	}
			printf("%d ",CQ[i]);

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
