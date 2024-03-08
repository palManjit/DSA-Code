#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int LQ[MAX];
int rear=-1,front=0;
void enQueue(int x)
{
	if(rear==MAX-1)
	{
		printf("\n Queue is full");
		return;
	}
	rear++;
	LQ[rear]=x;
}
int deQueue()
{
	if(front>rear)
	{
		printf("\n Queue is empty");
		return -1;
	}
	int x=LQ[front];
	front++;
	return x; 
}
void displayQueue()
{
	for(int i=front;i<=rear;i++)
	{
		  printf("%d",LQ[i]);
	}
}
int main()
{
	int v,x;
	while(1)
	{
		printf("\n press 1 to an element to insert");
		printf("\n press 2 to delect");
		printf("\n press 3 to display");
		printf("\n press 4 to exit");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("\n enter the element");
				scanf("%d",&v);
				enQueue(v);
				break;
			case 2:
				v=deQueue();
				printf("\n delect element is %d",v);
				break;
			case 3:
				displayQueue();
				break;
			case 4:
			    exit(0);
		}

	}
}
