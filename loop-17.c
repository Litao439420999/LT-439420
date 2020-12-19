如果整数A的全部因子（包括1，不包括A本身）之和等于B；且整数B的全部因子（包括1，不包括B本身）之和等于A，则A和B称为亲密数。求10000以内的亲密数。
程序运行示例如下：
( 220, 284)
(1184,1210)
(2620,2924)
(5020,5564)
(6232,6368)



#include <stdio.h>

int main()
{
   int num,sumA,sumB,i,j;

   for(num=6;num<=10000;num++)
   {
      
	  for(i=1,sumA=0;i<=num-1;i++)
	  {
	       if(!(num%i)) sumA+=i;
	  
	  }
      	  
	  for(j=1,sumB=0;j<sumA-1;j++)
	  {
	    if(!(sumA%j)) sumB+=j;
	  
	  }
    
	  if(sumB==num && num<sumA)
		  printf("(%d,%d)\n",num,sumA);
     
   }

   return 0;
}
