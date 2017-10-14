#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	double a;
	double b = 5000.00;
	double rate = 0.1;
	unsigned int year;
	for (rate = 0.1; rate <= 0.125; rate = rate + 0.005)
	{
		printf("%4s%21s\n", "year", "Amount on deposit");
		printf("%.2f\n",rate);
		for (year = 1; year <= 15; year++)
		{
			a = b* pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, a);
		}
	}
	system("pause");
	return 0;
}