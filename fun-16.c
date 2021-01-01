//请编写一个函数void fun(int tt[M][N],int pp[N]),
//tt指向一个M行N列的二维函数组，求出二维函数组每列中最小元素，
//并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define M  5
#define N  6

void fun(int tt[M][N], int pp[N])
{

    int min,i,j;

    for(i = 0 ;i< N ;i++)
    {
        min = tt[0][i];

        for(j=1;j<M;j++)
        {
            if(min>tt[j][i])
                min = tt[j][i];
        }
        pp[i] = min ;
        printf("%4d",min);

    }
}

int main(void)
{
    int a[M][N] , b[N];
    int i,j;

    srand(time(0));

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
         {  a[i][j] = rand()%100 + 1;
           printf("%4d",a[i][j]);
         }
         printf("\n");
    }

    fun(a, b);
    printf("\n\n");
    for(i=0; i<N ;i++)
    printf("%4d",b[i]);
    return 0;

}
