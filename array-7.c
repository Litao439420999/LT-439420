定义两个同阶二维数组，分别对这两个数组输入数据，求A+B和A-B的值。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  N  4

int main()
{
	int a[N][N],b[N][N],c[N][N],d[N][N];
	int i,j;

	srand(time(0));
	for(i=0;i<N;i++)
	  for(j=0;j<N;j++)
	  { a[i][j]= rand()%100; b[i][j]= rand()%30;}      
	
	printf("输出数组a:\n");
	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
		   printf("%5d",a[i][j]);
	   printf("\n");
	}

	printf("输出数组b:\n");

	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
		   printf("%5d",b[i][j]);
	   printf("\n");
	}

	//A+B ,A-B

	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
	   {   
		   c[i][j] = a[i][j]+b[i][j];
		   d[i][j] = a[i][j]-b[i][j];	      
	   }
	}

	//输出A+B
	printf("\n输出数组c:\n");

	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
		   printf("%5d",c[i][j]);
	   printf("\n");
	}

	//输出A-B
    printf("\n输出数组D:\n");

	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
		   printf("%5d",d[i][j]);
	   printf("\n");
	
	}

	return 0;

}
