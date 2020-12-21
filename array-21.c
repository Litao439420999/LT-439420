将一个数组的元素初始化为有序的，要求输入一个数后，按原来排序的规律将它插入数组中。

#include <stdio.h>
int  main()
{
	int a[6]={2,5,8,10,12};
   int x,i;

  for(i=0;i<5;i++)
	  printf("%d\t",a[i]);
  printf("\n");
 
  printf("Input x:  ");
  scanf("%d",&x);
  for(i=4;i>0;i--)
  {    if(a[i]>x)
	a[i+1]=a[i];
       else
	break;
  }

a[i+1]=x;

  for(i=0;i<6;i++)
	   printf("%d\t",a[i]);
 printf("\n");
 return 0;
}
