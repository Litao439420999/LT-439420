编写一个计算售票收款数目的小程序。要求：每张票零售价格为20元，团体票价格为15元，一次购票数目为20张以上时按团体票出售。对输入的购票数目计算并输出相应的购票款的数额。

#include <stdio.h>
int main()
{
	int num ;//购票的数目
	double price ,sum;
	
	printf("输入的购票数目\n");
	scanf("%d",&num);
	
	price = (num>=20)?15:20;
	sum = price * num;
	
	printf("入的购票数目:%d,购票款的数额:%f\n",num,sum);
	 
	 return 0;
}
