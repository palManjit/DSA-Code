#include<stdio.h>
#define MAX 30
char stack[MAX];
int top=-1;
void push(char ch)
{
	if(top==MAX-1)
	{
		printf("\n stack is full");
		return;
	}
	stack[++top]=ch;
}
char pop()
{
	if(top==-1)
	{
		printf("\n stack is empty");
		return -1;
	}
	char ch=stack[--top];
	return ch;
}
int preced(char ch)
{
	if(ch=='^')
	    return 3;
	else if(ch=='/'||ch=='*')
	    return 2;
	else if(ch=='+'||ch=='-')
	    return 1;
	else 
	    return 0;
}
void infixTopostfix(char infix [])
{
	int i=0,j=0,x;
	char ch,temp,postfix[MAX];
	while(infix[i]!='/0')
	{
		ch=infix[i];
		switch(ch)
		{
			case '(':
				push(ch);
				break;
			case ')':
				temp=pop();
				while(temp!='(')
				{
					postfix[j++]=temp;
					temp=pop();
				}
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				while(preced(stack[top]) >= preced(ch))
				{
					postfix[j++]=pop();
				}
			push(ch);
				break;
			default :
				postfix[j++]=ch;	
		}
		i++;
	}
	postfix[j]='/0';
	printf("\n postfix expression=%s",postfix);
}
int main()
{
	char infix[MAX];
	printf("\n enter vailed infix exkpresssion enclosed with ()");
	gets(infix);
	infixTopostfix(infix);
	return 0;
}
