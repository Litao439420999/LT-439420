统计20个同学成绩中位于各分数段（数组）的人数。

#include <stdio.h>
#define N  11

int main()
{	int a[N]={0},i=0,x;

	while(i<20)
	{
	  printf("id%d: ",i+1);scanf("%d",&x);
	  a[x/10]++;
	  i++;
	}
	for(i=0;i<11;i++)
	{
	    switch(i){
		  case 0:printf("0~9分:%d\n",a[i]);break;
		  case 1:printf("10~19分:%d\n",a[i]);break;
		  case 2:printf("20~29分:%d\n",a[i]);break;
	    case 3:printf("30~39分:%d\n",a[i]);break;
	    case 4:printf("40~49分:%d\n",a[i]);break;
	    case 5:printf("50~59分:%d\n",a[i]);break;
	    case 6:printf("60~69分:%d\n",a[i]);break;
	    case 7:printf("70~79分:%d\n",a[i]);break;
	    case 8:printf("80~89分:%d\n",a[i]);break;
	    case 9:printf("90~99分:%d\n",a[i]);break;
	    case 10:printf("100分:%d\n",a[i]);break;
		
		}	
	}
	return 0;
}
