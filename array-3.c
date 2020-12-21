用随机函数产生10个互不相同的两位整数,存放至一维数组中,并输出其中的素数并统计素数的个数。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{   int a[10];
   int i,j,k,label,count=0;

   srand(time(0));
   for(i=0;i<10;i++)
   {  
	   a[i] = rand()%30;
	   printf("%4d",a[i]);
   }
   
   printf("\n");
   
   for(i=0;i<10;i++)
   {  
     k = sqrt(a[i]); 	   
	   label=1;
	   for(j=2;j<=k;j++)
		   if(a[i]%j==0)
		   {label=0;break;}

		if(label)
		{  count++;
		  printf("%5d",a[i]);
		  if(count%5==0)
			  printf("\n");
		}   
   
   }

   printf("\ncount=%d\n",count);
	return 0;
}
