任意输入20个数到一维数组a中，求20个数的平均值。

#include <stdio.h>
#define  N 20

int main()
{
	int a[N],i,sum=0;
	double average;

	for(i=0;i<N;i++)
	{
	   scanf("%d",&a[i]);
	   sum += a[i];
	}

	average = sum*1.0/N;
	printf("aver:%.2lf",average);

	return 0;
}
