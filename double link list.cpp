#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct dll{
    int data;
    struct dll *prev;
    struct dll *next;
}node;
void createDll(node*l)
{
    char ch;
    while(1)
    {
        printf("\n Enter the data:");
        scanf("%d",&l->data);
        printf("\n Do you want another node ?(y/n): ");
        ch=getch();
        if(ch=='n'||ch=='N')
        {
            l->next=NULL;
            break;
        }
        l->next=(node*)malloc(sizeof(node));
        l->next->prev=l;
        l=l->next;
    }
}
void displayDll(node*l)
{
    char ch;
   	printf("\n press r to right traves,,,,press l to left traves,,,,,press e to exit");
    while(1)
    {
        printf("%d->",l->data);
        ch=getch();
        if(ch=='r'||ch=='R')
        {
            if(l->next!=NULL)
                l=l->next;
        }
        else if(ch=='l'||ch=='L')
        {
            if(l->prev!=NULL)
                l=l->prev;
        }
        else if(ch=='e'||ch=='E')
            break;
    }
}
node *getnode()
{
    node*new1=(node*)malloc(sizeof(node));
    printf("\n Enter the data:-");
    scanf("%d",&new1->data);
    return new1;
}
node *insertFirst(node*h)
{
    node*n1;
    n1=getnode();
    h->prev=n1;
    n1->next=h;
    n1->prev=NULL;
    return n1;
}
node *findnode(node*l,int x)
{
    while(1)
    {
        if(l->data==x)
            return l;
        else if(l->next==NULL)
            return NULL;
        l=l->next;
    }
}
node *insertSpecific(node*h)
{
    node *n1,*l;
    int x;
    printf("\n Enter the data to search:- ");
    scanf("%d",&x);
    l=findnode(h,x);
    if(l==NULL)
    {
        printf("\n Node not found.");
    }
    else
    {
        n1=getnode();
        n1->next=l->next;
        n1->prev=l;
        l->next->prev=n1;
        l->next=n1;
    }
    return h;
}
node *insertLast(node*h)
{
    node*l=h,*n1;
    while(l->next!=NULL)
    {
        l=l->next;
    }
    n1=getnode();
    l->next=n1;
    n1->prev=l;
    n1->next=NULL;
    return h;
}
node *insertionDll(node*h)
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
                h=insertFirst(h);
                break;
            case 2:
                h=insertSpecific(h);
                break;
            case 3:
                h=insertLast(h);
                break;
            case 4:
                return h;
        }
    }
}
node *deleteFirst(node *h)
{
    node*temp,*l=h;
    temp=h;
    h=h->next;
    h->prev=NULL;
    free(temp);
    return h;
}
node *deleteSpecific(node*h)
{
    int x;
    node*l,*temp;
    printf("\nEnter the data to search:- \n");
    scanf("%d",&x);
    l=findnode(h,x);
    if(l==NULL)
        printf("\nNode not found.\n");
    else
    {
        temp=l;
        l->prev->next=l->next;
        l->next->prev=l->prev;
        free(temp);
    }
    return h;
}
node *deleteLast(node*h)
{
    node *l=h,*temp;
    while(l->next!=NULL)
    {
        l=l->next;
    }
    temp=l;
    l->prev->next=NULL;
    free(temp);
    return h;
}
node*deletionDll(node*h)
{
    int x;
    while(1)
    {
    	printf("\n press 1 to delect before first node");
		printf("\n press 2 to delect specific node");
		printf("\n press 3 to delect last node");
		printf("\n press 4 to previous menu");
		scanf("%d",&x);
        switch (x)
        {
            case 1:
                h=deleteFirst(h);
                break;
            case 2:
                h=deleteSpecific(h);
                break;
            case 3:
                h=deleteLast(h);
                break;
            case 4:
                return h;
        }
    }
}
int main()
{
    int x;
    node *h=(node*)malloc(sizeof(node));
    h->prev=NULL;
    printf("**Welcome to Double Link List**");
    while(1)
    {
        
       	printf("\n press 1 to create");
		printf("\n press 2 to display");
		printf("\n press 3 to insertion");
		printf("\n press 4 to deletion");
		printf("\n press 5 to exit");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                createDll(h);
                break;
            case 2:
                displayDll(h);
                break;
            case 3:
                h=insertionDll(h);
                break;
            case 4:
                h=deletionDll(h);
                break;
            case 5:
                exit(0);
        }
    }
return 0;
}
