#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;

	printf("enter the value of a:");
	scanf("%d",&a);

	printf("enter the value of b:");
	scanf("%d",&b);

	c= a<b;

	printf("enter the value of c:%d",c);
	return 0;
}