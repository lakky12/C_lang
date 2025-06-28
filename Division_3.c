#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;

	printf("enter the value of a:");
	scanf("%d\n",&a);

	printf("enter the value of b:");
	scanf("%d\n",&b);

	c= a<b;

	printf("enter the value of c:%d",c);
	return 0;
}