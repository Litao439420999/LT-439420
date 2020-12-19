2.输出1000到9999有哪些玫瑰花数
例如：1634 = 1*1*1*1+6*6*6*6+3*3*3*3+4*4*4*4

#include <stdio.h>
#include <math.h>
int main()
{
    int i,t;
	  float sum;
	
	for(i=1000;i<10000;i++)
	{
		t = i;sum=0;
		while(t)
		{
		  sum+=pow(t%10,4);	
		  t/=10;
		}
		
		if(sum==i)
		{
			printf("%d is rosenumer\n",i);
		}
	}
	
	return 0;	
}


