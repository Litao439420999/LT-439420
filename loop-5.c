编写程序，完成下列题目： 
求和s= 3+33+333 

#include <stdio.h>
#include <math.h>
int main()
{
	int x=3,n,sum=0;
	for(n=1;n<=3;n++)
	{
		sum+=x;
		x=10*x+3;
	}
	printf("%d\n",sum);
	return 0;
}
