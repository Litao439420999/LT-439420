编写一段程序，从终端输入的四个整数，按从小到大进行输出显示。

#include <stdio.h>
int main()
{
	int  a,b,c,d,t;
	printf("输入4个整数\n");
	printf("整数1:");scanf("%d",&a);
	printf("整数2:");scanf("%d",&b);
	printf("整数3:");scanf("%d",&c);
	printf("整数4:");scanf("%d",&d);
	
	if(a>b)
	{
		t = a ; a = b; b = t;
	}
	if(a>c)
	{
		t = a ; a = c; c = t;
	}
	if(a>d)
	{
		t = a ; a = d;d = t;
	}
	if(b>c)
	{
		t = b ; b = c; c = t;
	}
	if(b>d)
	{
		t = b ; b = d; d = t;
	}
	if(c>d)
	{
		t = c ; c = d; d = t;
	}
	
	printf("%d<%d<%d<%d",a,b,c,d);
	return 0;
 } 
