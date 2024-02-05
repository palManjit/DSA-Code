#include<stdio.h>
int power(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else{
		return x*power(x,y-1);
	}
}
int main()
{
	int x,y,cal;
	printf("enter number");
	scanf("%d%d",&x,&y);
	cal=power(x,y);
	printf("%d",cal);
}
