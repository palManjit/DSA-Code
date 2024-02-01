#include<stdio.h>
void TOH(int n,char S,char D,char A)
{
	if(n==1)
	{
		printf("\n move disk %d from %c to %c",n,S,D,A);
		return;
	}
	TOH(n-1,S,A,D);
		printf("\n move disk %d from %c to %c",n,S,D,A);
		TOH(n-1,A,D,S);
}
int main()
{
	int n;
	printf("\n enter number of disk:");
	scanf("%d",&n);
	TOH(n,'S','D','A');
	return 0;
}
