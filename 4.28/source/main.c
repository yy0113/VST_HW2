#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a, b, d, e, f;
	float c;
	printf("1代表經理人員  2代表時薪工 3代表抽佣金  4代表零工\n");
	printf("請輸入代號:");
	scanf_s("%d",&a);
	switch (a)
	{
	case 1:
			printf("每週固定週薪為10000元\n");
			break;
	case 2:
		printf("每週工作時數:");
		scanf_s("%d",&b);
		printf("每小時工資:");
		scanf_s("%f",&c);
		if (b>40)
		{
			printf("薪水為 $%1f\n", (b - 40)*c*1.5 + 40 * c);

		}
		else
		{
			printf("薪水為  $%1f\n", b*c);
		}
		break;
	case 3:
		printf("當週銷售金額");
		scanf_s("%d", &d);
		printf("薪水為 %1f\n", 250 + d*0.057);
		break;
	case 4:
		printf("生產總件數:");
		scanf_s("%d",&e);
		printf("每件多少錢");
		scanf_s("%d",&f);
		printf("薪水為%d\n", f*e);
		break;
	   default:
		   printf("非本公司員工\n");
		break;
	}
	system("pause");
	return 0;
}