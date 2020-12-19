输出50～100之间不能被3整除的数。

#include <stdio.h>

int main()
{
	int num;
	
	for(num=50;num<101;num++)
	{
		if(num%3)
		printf("%4d",num);
	}
	
	return 0;
}
