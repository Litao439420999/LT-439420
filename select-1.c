编写一段程序，像下面这样输入一个整数值，显示它的绝对值。

第一种方法：
#include <stdio.h>
int main()
{
  int x;
  
  printf("请输入一个整数:");
  scanf("%d",&x);
  
 if(x<0) x = -x;
    printf("绝对值是%d\n",x);
  return 0;	
} 

第二种方法：  
#include <stdio.h>
int main()
{
  int x;
  
  printf("请输入一个整数:");
  scanf("%d",&x);
  
    x = (x<0)?-x:x;
  printf("绝对值是%d\n",x);
  return 0;	
} 
