#include<stdio.h>
int linearSearch(int a[],int n,int x)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==x)
		{
			return i;
		}
	}
	return -1;
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n;
	printf("\n enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("\n enter %d element",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x;
	printf("\n enter searching element:");
	scanf("%d",&x);
	int p=linearSearch(a,n,x);
	if(p!=-1)
		printf("\n element found at %d position",p);
	else 
		printf("\n element not found");
		return 0;
}

