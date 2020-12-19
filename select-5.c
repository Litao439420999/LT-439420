编写一段程序，计算出输入的三个整数中的最小值并显示。
#include <stdio.h>
int main()
{
	int x,y,z,min;
	
	printf("输入三个整数:\n");
	printf("整数A:");scanf("%d",&x);
	printf("整数B:");scanf("%d",&y);
	printf("整数C:");scanf("%d",&z);
	
	min=(x<y)?x:y;
	min=(min<z)?min:z;
	
	printf("\n三个整数中的最小值:%d\n",min);
	return 0;
}
