#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b;
	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%d",&a);

	while (a != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f",&b);

		if (a>40)
		{
			printf("Salary is $%f\n",(a-40)*b*1.5+40*b);

		}
		else
		{
			printf("Salary is $%f\n", a*b);
		}
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &a);
	}





}
