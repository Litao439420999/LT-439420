编写一个程序，计算一个整形数组中最大的和最小的数之间的差值。
#include <stdio.h>
int main()
{
	int a[10]={20,11,32,45,15,52,67,17,81,26};
	int max,min;
	int i;

	max = min = a[0];

	for(i=1;i<10;i++)
	{
	   if(max<a[i])max = a[i];
	   if(min>a[i])min = a[i];
		
	}
  printf("\n%d-%d=%d\n",max,min,max-min);

  return 0;
}
