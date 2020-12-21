编写一个程序，把两个数组内的相应元素相加，结果存储到第三个数组内。
#include <stdio.h>
int main()
{
    int a[10],b[10],c[10]={0};
	 int i;

	printf("input array_a:");
    for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	printf("\ninput array_b:");
    for(i=0;i<10;i++)
		scanf("%d",&b[i]);

	printf("\noutput array_c\n");
	for(i=0;i<10;i++)
	{	
		c[i] = a[i] + b[i];
		printf("%4d",c[i]);
	}
  return 0;
}

