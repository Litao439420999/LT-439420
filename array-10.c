有一个二维数组a[3][4]，找出其中最大和最小元素，并指出它们所在的行和列。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a[3][4];
	int i,j,min,max,row,col;

	//存入随机数
	srand(time(0));

	for(i=0;i<3;i++)
	{
	  for(j=0;j<4;j++)
	  {
	     a[i][j] = rand()%100;
		 printf("%4d",a[i][j]);
	  
	  }
	  printf("\n");
	
	}

	//找出其中最大和最小元素
	max = a[0][0];
	for(i=0;i<3;i++)
	{
	  for(j=0;j<4;j++)
	  { 
	     if(max < a[i][j]) 
		 {
		    max = a[i][j];row =i ; col =j;
		 }
	  }
	}

	printf("max=%d,row=%d,col=%d\n",max,row,col);


	min = a[0][0];
	for(i=0;i<3;i++)
	{
	  for(j=0;j<4;j++)
	  { 
	     if(min >a[i][j]) 
		 {
		    min = a[i][j];row =i ; col =j;
		 }
	  }
	}
	printf("min=%d,row=%d,col=%d\n",min,row,col);

	return 0;

}
