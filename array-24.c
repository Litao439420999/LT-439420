将一个2X3的二维数组a的行和列元素互换，存到一个3X2的二维数组b中。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a[2][3],b[3][2];
  int i,j;
  //用随机数填充二维数组a
  srand(time(0));
  for(i=0;i<2;i++)
  {
	for(j=0;j<3;j++)
	{ a[i][j] = rand()%20+1;printf("%5d",a[i][j]);}

	printf("\n");
  
  }

  //元素互换
 for(i=0;i<2;i++)
  {
	for(j=0;j<3;j++)
		b[j][i] = a[i][j];
 }

 //输出B数组

 printf("\n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<2;j++)
	   printf("%5d",b[i][j]);

   printf("\n");
 
 }

 return 0;
}


