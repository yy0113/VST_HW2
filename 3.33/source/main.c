#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int i, j, a, b;
	printf("Enter the long:");
	scanf_s("%d",&a);
	printf("Enter the wide:");
	scanf_s("%d",&b);

	for ( i = 1; i <= a; i++)
	{
		for ( j = 1; j <= b; j++)
		{
			if (i == 1 || i == a || j == 1 || j == b)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	system("pause");
	return 0;




}

