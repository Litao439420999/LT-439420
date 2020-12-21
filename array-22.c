分别用“冒泡排序法”和“简单选择排序”对n个整数从小到大排序。编写主函数main，使用随机函数产生大小处于100-350之间的20个随机整数，在主函数进行排序并输出排序后的结果

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
   int a[N];
   int i,j,t,k;

   //随机数填充数组
   srand(time(0));
   for(i=0;i<N;i++)
	  { a[i] = rand()%250+100;printf("%5d",a[i]);}

   //冒泡排序
   for(i=0;i<N-1;i++)
   {
     for(j=0;j<N-i-i;j++)
		 if(a[j]>a[j+1])
		 {
		   t = a[j];
		   a[j] = a[j+1];
		   a[j+1] = t;
		 
		 }
   
   }
   printf("\nsorted:\n");
   for(i=0;i<N;i++)
	   printf("%5d",a[i]);
   printf("\n");

   //简单选择排序
   for(i=0;i<N-1;i++)
   {
      k = i;
	  for(j=i+1;j<N;j++)
		  if(a[k]>a[j])k = j;

	  t = a[i];
	  a[i] = a[k];
	  a[k] = t;
   
   }

 printf("\nsorted:\n");
   for(i=0;i<N;i++)
	   printf("%5d",a[i]);
   printf("\n");

   return 0;

}
