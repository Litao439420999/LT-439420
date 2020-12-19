100元人民币兑换10元,5元和1元的纸币(每一种都要有)共50张,请用穷举法编程计算共有几种兑换方案,每种方案各兑换多少张纸币.     
输出格式要求为：
"x = %d, y = %d, z = %d\n" 
"count = %d\n"


#include <stdio.h>
int main()
{
   int x,y,z,count=0;  //x：10，y:5,z:1;

   for(x = 1;x<=10;x++)
   {
      for(y=1;y<=20;y++)
	  {
	       z = 50 - x -y; //注意这里，

		  if(10*x+5*y+z == 100)

		  { 
			  printf("x=%d,y=%d,z=%d\n",x,y,z);
			  count++;
		   
		  }
		
		}	  
	  
	  }
      
   printf("count=%d\n",count);

   return 0;

}

 
