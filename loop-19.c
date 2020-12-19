输入一个 k 位整数，请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。

#include <stdio.h>
int main()
{
int x,a[10]={0},n,i;
   printf("input x:");scanf("%d",&x);

   n = x;//注意这里
	while(n)
	{	
switch(n%10)
	   {
			case 0: a[0]++;break;
			case 1: a[1]++;break;
			case 2: a[2]++;break;
			case 3: a[3]++;break;
			case 4: a[4]++;break;
			case 5: a[5]++;break;
			case 6: a[6]++;break;
			case 7: a[7]++;break;
			case 8: a[8]++;break;
			case 9: a[9]++;break;	     
	   }
	   n/=10;	
	
	}

	for(i=0;i<10;i++)
	{
	   if(a[i])//注意这里
	   printf("%d:%d\n",i,a[i]);
	
	}
return 0;
}

