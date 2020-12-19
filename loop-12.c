从1000年到1600年，有哪些年份是闰年。输出要求：每一行输出5个。

#include <stdio.h>
int main()
{
	int x=1000,n=0;
	while(x<=2000)
	{
		if((x%4==0 && x%100!=0)||(x%400==0))
		    {
		    	n++;
		    	printf("%d\t",x);
		    	 if(!(n%5))
	     		printf("\n");
			}
		
	   
	     x++;
	}
	return 0;
 } 


