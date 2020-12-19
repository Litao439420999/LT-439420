统计100到200有哪些素数，输出并统计个数。

#include <stdio.h>
#include <math.h>

int main()
{
    int  num,k,i,label,count=0;

	for(num=100 ;num<201 ; num++)
	{   
		   label=1;
		   k = (int)sqrt(num);

	    for(i=2;i<=k;i++)
	  	{
	        if( num%i == 0)
		      { label=0;break;}
		   }

      	if(label)
	  	{  
			   count++;
			   printf("%d\t",num);

			  if(count%5==0)
				printf("\n");
		  }
	}
	printf("\ncount:%d\n",count);

	return 0;
}

