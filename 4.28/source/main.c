#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a, b, d, e, f;
	float c;
	printf("1�N��g�z�H��  2�N����~�u 3�N������  4�N��s�u\n");
	printf("�п�J�N��:");
	scanf_s("%d",&a);
	switch (a)
	{
	case 1:
			printf("�C�g�T�w�g�~��10000��\n");
			break;
	case 2:
		printf("�C�g�u�@�ɼ�:");
		scanf_s("%d",&b);
		printf("�C�p�ɤu��:");
		scanf_s("%f",&c);
		if (b>40)
		{
			printf("�~���� $%1f\n", (b - 40)*c*1.5 + 40 * c);

		}
		else
		{
			printf("�~����  $%1f\n", b*c);
		}
		break;
	case 3:
		printf("��g�P����B");
		scanf_s("%d", &d);
		printf("�~���� %1f\n", 250 + d*0.057);
		break;
	case 4:
		printf("�Ͳ��`���:");
		scanf_s("%d",&e);
		printf("�C��h�ֿ�");
		scanf_s("%d",&f);
		printf("�~����%d\n", f*e);
		break;
	   default:
		   printf("�D�����q���u\n");
		break;
	}
	system("pause");
	return 0;
}