#include<stdio.h>
int main()
{
	int M,N,i,j,l,k;
	printf("\n enter the how many keys:");
	scanf("%d",&N);
	if(N<=10)
	M=10;
	else if(N<=100)
	M=100;
	int LP[M]={0};
	for(j=1;j<=N;j++)
	{
		printf("\n enter the keys");
		scanf("%d",&k);
	
	i=0;
	while(1)
	{
		l=(k+i)%M;
		if(LP[l]==0)
		{
			LP[l]=k;
			break;
		}
		i++;
		
	}
	
}
for(i=0;i<M;i++)
{
	printf("%d ",LP[i]);
}

}
