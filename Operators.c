#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	
	printf("the value of a:");
	scanf("%d\n",&a);

	printf("the value of b:");
	scanf("%d\n",&b);

	c=a+b;
	printf("the value of c:%d\n",c);

	d=a-b;
	printf("The value of d:%d\n",d);

	e=a*b;
	printf("The value of e:%d\n",e);

	f=a/b;
	printf("The  value of f:%d\n",f);

	g=a%b; 
	printf("enter the value of g:%d\n",g);
	return 0;
}