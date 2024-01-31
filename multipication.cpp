#include<stdio.h>
int mal(int x,int y)
{
	if(y==0)
	{
		return 0;
	}
	else{
		return x +mal(x,y-1);
	}
}
int main()
{
	int x,y,mul;
	printf("enter number");
	scanf("%d%d",&x,&y);
	mul=mal(x,y);
	printf("%d",mul);
}
