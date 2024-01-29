#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void inputArray(int a[],int n)
{
	printf("\n enter %d number:");
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
void insectionSort(int a[],int n)
{
	int i,j,key=0;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	
}
int main()
{
	int a[MAX],n;
	printf("\n enter how many number=%d:",MAX);
	scanf("%d",&n);
	inputArray(a,n);
	printArray(a,n);
	insectionSort(a,n);
	printf("\n Sorted Array:");
	printArray(a,n);
}
