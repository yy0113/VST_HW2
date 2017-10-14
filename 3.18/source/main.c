#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float a;
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f",&a);

	while (a!=-1)
	{
		printf("Salary is:  $%f\n", (a*0.09) + 200);
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &a);
	}

	system("pause");
	return 0;
}