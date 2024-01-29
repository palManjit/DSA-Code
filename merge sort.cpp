/* c program for merge sorting */
#include<stdio.h>

void merge(int a[],int min,int mid,int max)
{
	int tmp[30];
	int i,j,k,m;
	j=min;
	m=mid+1;
	for(i=min; j<=mid && m<=max ; i++)
	{
		if(a[j]<=a[m])
		{
			tmp[i]=a[j++];
		}
		else
		{
			tmp[i]=a[m++];
		}
	}
	while(j<=mid){
		tmp[i++] = a[j++];
	}
	while(m<=max){
		tmp[i++] = a[m++];
	}
	for(k=min; k<=max; k++)
		a[k]=tmp[k];
}

void part(int a[],int min,int max)
{
	int mid;
	if(min<max)
	{
		mid=(min+max)/2;
		part(a,min,mid);
		part(a,mid+1,max);
		merge(a,min,mid,max);
	}
}

int main()
{
	int a[30];
	int i,n;
	printf("\n\t------- Merge sorting method -------\n\n");
	printf("Enter total no. of elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	part(a,0,n-1);
	printf("\n\t------- Merge sorted elements -------\n\n");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
