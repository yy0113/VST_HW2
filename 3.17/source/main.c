#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a;
	float b, c, d, e, f;
	printf("Enter account number (-1 to end):");
	scanf_s("%d",&a);
	while (a!=-1)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);
		f = b + c-d;
		if (f>e)
		{
			printf("Account:\t%d\n", a);
			printf("Credit limit:%f\n", e);
			printf("Balance:%f\n", f);
			printf("Credit Limit Excedded\n");
			
		}
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &a);
	}


	system("pause");
	
}