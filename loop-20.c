输入规定个数个整数并显示他们的和及平均值（使用for语句)

#include <stdio.h>
int main()
{
	int i,n,x;
	double sum=0,average;
	
	printf("input n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("NO.%d ",i+1);
		scanf("%d",&x);
		
		sum += x;
	}
	
	printf("\n合计值:%f\n平均值：%.2f\n",sum,sum/n);
	
	return 0;
 } 
