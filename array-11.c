判断N*N矩阵是否为对称矩阵并输出矩阵。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
	int a[3][3]={{1,2,1},{2,1,3},{1,3,1}}; //对称
	int b[3][3];
	int i,j,flag = 1;

	//随机数填充数组B
	srand(time(0));
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	    b[i][j]=rand()%100;
		printf("%4d",b[i][j]);
	  }
	 printf("\n");
	}

	//判断a是否为对称矩阵
   flag = 1;
	for(i=0;i<3;i++)
	{
	  for(j=i;j<3;j++)
	  {
		  if(a[i][j]!= a[j][i])
		  {   flag = 0;break;  }
	  }
	
	}

	if(flag==1)
	{
	  printf("\n数组a是对称矩阵\n");

	  for(i=0;i<3;i++)
	  {   for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	  }	
	}
	else
		printf("\n数组a不是是对称矩阵\n");

//判断b是否为对称矩阵
    flag = 1;
	for(i=0;i<3;i++)
	{
	  for(j=i;j<3;j++)
	  {	  if(b[i][j]!= b[j][i])
		  {	     flag = 0;break;	  }
	  }	
	}

	if(flag==1)
	{
	  printf("\n数组b是对称矩阵\n");

	  for(i=0;i<3;i++)
	  {
	    for(j=0;j<3;j++)
			printf("%5d",b[i][j]);
		printf("\n");
	  }
	
	}
	else
		printf("\n数组b不是是对称矩阵\n");


	return 0;

}
