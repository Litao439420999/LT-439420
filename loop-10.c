打印100以内个位数为6且能被3整除的所有自然数。

#include<stdio.h>
int main()
{
	int num;
	
	for(num=1;num<101;num++)
	{
		if((6==num%10)||(6==num/10))
		{
			if(!(num%3))
				printf("%d\t",num);
		 } 
	}
	
	return 0;
}


