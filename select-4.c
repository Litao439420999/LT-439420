编写一段程序，像下面这样输入两个整数，如果它们//的差值小于等于10，则显示“它们的差小于等于10”。否则，显示“它们的差大于等于11”。

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("输入两个整数:\n");
	printf("整数A：");scanf("%d",&a);
	printf("整数B：");scanf("%d",&b);
	
	c =(a-b < 0 )?b-a:a-b;
	if(c<=10)
	  printf("它们的差小于等于10");
	else 
	  printf("它们的差大于等于11");
	  
	 return 0;   
	
} 
