将数组中的值逆序重新存放，例如：原来顺序为8、6、5、4、1；要求改为1、4、5、6、8。

#include <stdio.h>
#define N 5
int main()
{
	int a[N]={8,6,5,4,1},i,j,temp;
   for(i=0,j=4;i<j;i++,j--)
	{	 temp = a[i];
		 a[i] = a[j];
		 a[j] = temp;	
	}
  
for(i=0;i<5;i++)
		printf("%5d",a[i]);
	return 0;

}
