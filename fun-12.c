使用数组作为函数参数，实现数组中元素的逆序。

#include <stdio.h>
#include <stdlib.h>
#include<time.h>


void fun(int a[], int n)
{
    int i,j,t;

    for(i=0,j=n-1;i<j;i++,j--)
    {
         t = a[i];
         a[i] = a[j];
         a[j] = t;
    }


}

int  main()
{
    int a[10];
    int i;

    srand(time(0));
    for(i=0;i<10;i++)
    {
        a[i] = rand()%100+1;
        printf("%5d",a[i]);
    }
    
    printf("\n");

    fun(a,10);
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
    
    return 0;

}
