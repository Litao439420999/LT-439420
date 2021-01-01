编写一个函数，求一维数组的平均值、最大值。


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int max;

float  fun(int a[], int n)
{
    int i, sum = 0;
    float aver;

    max = a[0];
    
    for(i = 0 ;i < n ;i++)
       { 
           sum += a[i];

           if(max<a[i]) max = a[i];
       }

    aver = (float)sum/n;

    return aver ;

}

int main(void)
{
    int x[10];
    int i;
    float aver;

    srand(time(0));

    for(i=0;i<10;i++)
    {
        x[i] = rand()%100+1;
        printf("%5d",x[i]);
    }

    aver = fun(x, 10);

    printf("\nmax=%d,aver=%.2f\n",max, aver);

    return 0;
}
