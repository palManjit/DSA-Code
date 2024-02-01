#include<stdio.h>
#define MAX 10
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int ar[],int low,int high)
{
	int pivot=ar[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++)
	{
		if(ar[j]<pivot)
		{
			i++;
			swap(&ar[i],&ar[j]);
		}
	}
		swap(&ar[i+1], &ar[high]);
		return(i+1);
}
void quickSort(int ar[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(ar,low,high);
		quickSort(ar,low,pi-1);
		quickSort(ar,pi+1,high);
		
	}
}
void printArray(int ar[],int size)
{
	for(int  i=0;i<size;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}
int main()
{
	int a[10],n,i;
	printf("\n enter how many number=10");
	scanf("%d",&n);
	printf("\n enter number one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	printf("\n sorted array is:");
	printArray(a,n);
}
