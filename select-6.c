编写一段程序，计算出输入的四个整数中的最大值并显示。
#include <stdio.h>
int main()
{
	int a,b,c,d,max;
	
	printf("输入三个整数:\n");
	printf("整数A:");scanf("%d",&a);
	printf("整数B:");scanf("%d",&b);
	printf("整数C:");scanf("%d",&c);
	printf("整数d:");scanf("%d",&d);
	
	max = (a > b)?a:b;
	max = (max>c)?max:c;
	max = (max>d)?max:d;
	
	printf("\n4个整数中的最大值:%d\n",max);
	
	return 0;
}

