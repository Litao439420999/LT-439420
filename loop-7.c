一个数如果恰好等于它的因子之和，这个数就称为完数。求100之内的所有完数。

#include <stdio.h>
int main()
{
	int n,j,sum;
	
	for(n=2;n<101;n++)
	{
		sum=0;
		for(j=1;j<n;j++)
			if(0==n%j) sum+=j;
		
		if(sum==n) printf("%d\t",n);
	}
	return 0;
 }  

