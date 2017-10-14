#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float a, b;
	int c;
	printf("Enter principal (-1 to end):");
	scanf_s("%f",&a);
	while (a !=-1)
	{
		printf("Enter interest rate :");
		scanf_s("%f",&b);
		printf("Enter term of the loan in days :");
		scanf_s("%d",&c);
		printf("The interest charge is $%f\n", a*b*c/365 );
		printf("Enter principal (-1 to end):");
		scanf_s("%f", &a);
	}
}