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
	int h;
	int  i;
	int j;

	printf(" Enter the value of a:");
	scanf("%d",&a);

	printf("the value of b:");
	scanf("%d",&b);

	c=a+b;
	printf("The value of c:%d\n",c);

	d=a-b;
	printf("The value of d:%d\n",d);

	e=a*b;
	printf("The value of e:%d\n",e);

	f=a/b;
	printf("The  value of f:%d\n",f);

	g=a%b; 
	printf("The value of g:%d\n",g);

	i=a>b;
	printf("The value of i:%d\n",i);

	j=a**b;
	printf("The value of j:%d\n",j);
	return 1;
}