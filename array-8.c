编制程序，将N*N的矩阵转置。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N  4

int main()
{
	int a[N][N];
	int i,j,temp;

	//用随机数填充二维数组a
	srand(time(0));
	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
	   {  
		   a[i][j] = rand()%100;
		   printf("%4d",a[i][j]);
	   }
	   printf("\n");
	}

	//矩阵转置
	for(i=0;i<N;i++)
	{
	  for(j=i+1;j<N;j++)
	  {
	     temp = a[i][j];
		 a[i][j] = a[j][i];
		 a[j][i] = temp;	 
	  }	
	}

	printf("\n转置后数组a:\n");
	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
	  	   printf("%4d",a[i][j]);
	
	   printf("\n");
	
	}
	return 0;

}
