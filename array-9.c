求M行N列数组中各行最大值中最小的数。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M  5  //5行
#define  N  6  //6列

int main()
{
  int a[M][N];
  int b[M];  //用来存放每一行最大元素
  int i,j,max,min;

  //用随机数填充二维数组
  srand(time(0));
  for(i=0;i<M;i++)
  {
     for(j=0;j<N;j++)
	 {	 
		 a[i][j] = rand()%100;
		 printf("%4d",a[i][j]);
	 }
	 printf("\n"); 
  }

  //查找每行最大值放在一维数组b
  for(i=0;i<M;i++)
  {
      max = a[i][0];
	  for(j=1;j<N;j++)
	  {
	     if(max<a[i][j]) max = a[i][j];
	  }
      printf("%4d",max);
	  b[i]=max;
  
  }
  printf("\n");
 //查找b数组最小值
  min = b[0];
  for(i=1;i<M;i++)
	  if(min>b[i])min=b[i];

 printf("M行N列数组中各行最大值中最小的数:%d\n",min);

 return 0;
