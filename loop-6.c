打印500以内的“水仙花数”。“水仙花数”是一个三位数，其各位数立方和等于该数本身。

#include<stdio.h>
#include<math.h>

int main()
{
  int x,y,sum;
 
  printf("500以内的水仙花有:");
  for(x=100;x<=500;x++)
  {
	  sum=0;   y=x;  //注意这里
	  while(y)
	  { 
	      sum+=pow(y%10,3);
          y/=10;		 //注意这里 

	  }

   if(sum==x)
	  printf("%d\t",x);
  
  }
	  return 0;
}

