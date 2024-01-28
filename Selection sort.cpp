#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void inputArray(int a[],int n)
{
	printf("\n enter %d element",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void SelectionSort(int a[],int n)
{
	int i,j,min,pos,t;
	for(i=0;i<n;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			t=a[i];
			a[i]=a[pos];
			a[pos]=t;
		}
		printf("\n list after %d pass:",i+1);
		printArray(a,n);
	}
}
int main()
{
	int a[MAX],n;
	printf("\n enter how many number=%d",MAX);
	scanf("%d",&n);
	inputArray(a,n);
	printArray(a,n);
	SelectionSort(a,n);
	printf("\n list is:");
	printArray(a,n);
}
