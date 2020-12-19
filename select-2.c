编写一段程序，像下面这样输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B，则显示“A大于B。”。如果A小于B，则显示“A小于B。”。

#include <stdio.h>
int main()
{
	int a,b;
  
	printf("请输入两个整数:\n");
	printf("整数A:");scanf("%d",&a);
	printf("整数B:");scanf("%d",&b);
	
	if(a>b)printf("\nA大于B。");
	else if(a<b) printf("\nA小于B。");
	else printf("\nA等于B");
	
	return 0; 
 }
