#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct link{
	int data;
	struct link*next;
}node;
void create(node*l)
{
	while(1)
	{
		printf("\n enter an element");
		scanf("%d",&l->data);
		printf("\n do you want to another node(y/n)?");
		char ch=getch();
		if(ch=='n'||ch=='N')
		{
			l->next=NULL;
			break;
		}
		l->next=(node*)malloc(sizeof(node));
		l=l->next;
	}
}
void display(node*l)
{
	while(l->next!=NULL)
	{
		printf("%d->",l->data);
		l=l->next;
	}
	printf("%d->",l->data);
}
node*getnode()
{
	node*new1=(node*)malloc(sizeof(node));
	printf("\n enter element");
	scanf("%d",&new1->data);
	return new1;
	
}
node*insertBeforefiirstNode(node*h)
{
	node*n1;
	n1=getnode();
	n1->next=h;
	return n1;
}
node*findNode(node*h,int x)
{
	node*l=h;
	while(l->data!=x&&l!=NULL)
	{
		l=l->next;
	}
	return l;
}
node*insertSpecificNode(node*h)
{
	node*n1,*l=h;
	int x;
	printf("\n enter element you want to insert after this node");
	scanf("%d",&x);
	l=findNode(h,x);
	if(l==NULL)
	{
		printf("\n node not found");
	}
	else
	{
	n1=getnode();
	n1->next=l->next;
	l->next=n1;
    }
    return h;
}
node*insertLastNode(node*h)
{
	node*n1,*l=h;
	while(l->next!=NULL)
	{
		l=l->next;
	}
	n1=getnode();
	l->next=n1;
	n1->next=NULL;
	return h;
}
node*insertion(node*head)
{
	int x;
	while(1)
	{
		printf("\n press 1 to insert before first node");
		printf("\n press 2 to insert specific node");
		printf("\n press 3 to insert last node");
		printf("\n press 4 to previous menu");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				head=insertBeforefiirstNode(head);
				break;
			case 2:
				head=insertSpecificNode(head);
				break;
			case 3:
				head=insertLastNode(head);
				break;
			case 4:
				return head;
		}
	}
}
node*delectfirstNode(node*h)
{
	node*temp;
	temp=h;
	h=temp->next;
	free(temp);
	return h;
}
node*findNode(node*h,int x)
{
	node*l=h;
	while(l->data!=x&&l!=NULL)
	{
		l=l->next;
	}
	return l;
}
node*delectspecificNode(node*h)
{
	node*l,*temp;
	int x;
	while(1)
	{
		printf("\n enter element after this node");
		scanf("%d",&x);
		l=findNode(h,x);
		if(l==NULL)
		{
			printf("\n node not found");
		}
		else 
		{
			temp=l->next;
			l->next=l->next->next;
			free(temp);
		}
		return h;
	}
}
node*delectLastNode(node*h)
{
	node*temp,*l=h;
	while(l->next->next!=NULL)
	{
		l=l->next;
	}
	temp=l->next;
	l->next=NULL;
	free(temp);
	return h;
}
node*deletion(node*head)
{
	int x;
	while(1)
	{
		printf("\n press 1 to delect before first node");
		printf("\n press 2 to delect specific node");
		printf("\n press 3 to delect last node");
		printf("\n press 4 to previous menu");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				head=delectfirstNode(head);
				break;
			case 2:
				head=delectspecificNode(head);
				break;
			case 3:
				head=delectLastNode(head);
				break;
			case 4:
				return head;
		}
	}
}
int main()
{
	int x;
	node*head=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("\n press 1 to create");
		printf("\n press 2 to display");
		printf("\n press 3 to insertion");
		printf("\n press 4 to deletion");
		printf("\n press 5 to exit");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				create(head);
				break;
			case 2:
				display(head);
				break;
			case 3:
				head=insertion(head);
				break;
			case 4:
				head=deletion(head);
				break;
			case 5:
				exit(0);
		}
	}
}


