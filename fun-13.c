分别定义冒泡排序和简单选择排序两个函数，实现对10个整数排序。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  selectSort(int a[],int n)
{
    int i,j,k,t;

    for(i=0;i<n-1;i++)
    {
        k = i;
        for(j= i+1 ;j < n; j++)
            if(a[k]> a[j]) k = j;

        t = a[i];
        a[i] = a[k];
        a[k] = t;
        
    }

}

void bubSort(int a[],int n)
{
    int i,j,t;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
    }

}

int main(void)
{
    int x[10],i;

    srand(time(0));

    for(i=0;i<10;i++)
    {
        x[i] = rand()%50 + 1;
       printf("%4d",x[i]); 
    }

    printf("\nsored:\n");
    selectSort(x,10);
    for(i=0;i<10;i++)
        printf("%d\t",x[i]);

     printf("\nsored:\n");
     bubSort(x,10);
    for(i=0;i<10;i++)
        printf("%d\t",x[i]);

    return 0;    
}
