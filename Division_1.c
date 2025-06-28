#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	float num_3;
	float num_4;
	int division;

	printf("The value of num_1:");
	scanf("%d\n",&num_1);
	printf("enter the num_1 value:%d\n",num_1);

	printf("the value of num_2:");
	scanf("%d\n",&num_2);
	printf("enter the num_2 value:%d\n",num_2);

	printf("the value of num_3:"); 
	scanf("%f\n",&num_3);

	printf("the value of num_4:");
	scanf("%f\n",&num_4);

	division=(num_1/num_2)/(num_3/num_4);

	printf("division is:%d",(num_1/num_2)/(num_3/num_4);
	return 0;
}