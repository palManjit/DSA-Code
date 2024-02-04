#include<stdio.h>
int gcd(int x,int y)
{
	if(x%y==0)
	{
		return y;
	}
	else{
		return gcd(y,x%y);
	}
}
int main()
{
	int x,y,cal;
	printf("enter number");
	scanf("%d%d",&x,&y);
	cal=gcd(x,y);
	printf("%d",cal);
}
