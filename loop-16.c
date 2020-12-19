编写程序，输出所有各位数字的立方和等于1099的三位整数。


#include <stdio.h>
#include <math.h>
int main()
{
	int x ,y,sum;

	for(x=100;x<=999;x++)
	{
	     sum = 0; y=x; //注意这里

		 while(y)
		 {
		     sum+=pow(y%10,3);
			   y/=10;
		 
		 }

		 if(1099==sum)
			 printf("%d\t",x);

	
	}

	   return 0;
}
