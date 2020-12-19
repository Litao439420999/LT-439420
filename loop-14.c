输入n个随机数,当随机数为8的话，结束输入.输出随机数8出现时，已经产生随机数的个数。 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int num,count=0;
   srand(time(NULL));
   
   do{
   	  num =rand()%9; count++;
   	  printf("%d\t",num);
   }while(num!=8);
   
   printf("\n%d是第%d次出现的随机数\n",num,count);
   return 0;
   	
} 
