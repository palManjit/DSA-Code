#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int PQ[MAX][2];
int rear=-1,front=0;
int getMax()
{
	int pos;
	int max=PQ[front][1];
	for(int i=front+1;i<=rear;i++)
	{
		if(PQ[i][1]>max)
		{ 
			max=PQ[i][1];
			pos=i;
		}
	} 
	return pos;
}
void enQueue(int value,int p)
{
	if(rear==MAX-1)
	{ 
		printf("\n Queue is full");
		return;
	}
	rear++;
	PQ[rear][0]=value;
	PQ[rear][1]=p;
}
int deQueue()
{
	if(front>rear)
	{
		printf("\n Queue is empty");
		return -1;
	}
	int pos=getMax();
	int x=PQ[pos][0];
	for(int i=pos;i>front;i--)
	{
		PQ[i][0]=PQ[i-1][0];
		PQ[i][1]=PQ[i-1][1];
	}
	front++;
	return x;
}
void displayQueue()
{
	for(int i=front;i<=rear;i++)
	{
		printf("%d",PQ[i][0]);
	}
}
int main()
{
	int x,v,d;
	while(1)
	{
      printf("\n press 1 to indert an element:");	
	  printf("\n press 2 to delect an element:");		
      printf("\n press 3 to display:");		
      printf("\n press 4 to exit:");
	  scanf("%d",&x);
	  switch(x)
	  {
	      case 1:
		  printf("\n enter element value and pioraty value");
		  scanf("%d%d",&v,&d);
		  enQueue(v,d);
		  break;
		 case 2:
		     v=deQueue();
			 printf("\n delect element is: %d",v);
			 break;
		case 3:
		    displayQueue();
			break;
		case 4:
		    exit(0);	
	   }		
	
	}
}
