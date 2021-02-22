// 程序设计：给定2个大小分别为n, m的整数集合，分别存放在两个数组中
// int A[n], B[m]，输出两个集合的交集。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>


int main(void)
{
    int  n, m,i;
    int  *A,*B;
    int  c[100],count=0;

    printf("input n:"); scanf("%d",&n);
    printf("input n:"); scanf("%d",&m);

    A = (int *)malloc(sizeof(int));
    B = (int *)malloc(sizeof(int));

    srand(time(0));
    for(i = 0 ;i < n; i++)
       {
           A[i] = rand()%30 + 1;
           printf("%3d",A[i]);
       }
    printf("\n");   

    for(i = 0 ;i < m; i++)
       {
           B[i] = rand()%30 + 1;
           printf("%3d",B[i]);
       }
    printf("\n");      
    
    for(i=0;i<(n<m?n:m);i++)
    {
        if(A[i]==B[i])
        {
            c[count++] = A[i];
            printf("%3d",A[i]);
        }
    }

    return 0;


}

