编写函数fun，函数的功能是求出二维数组周边元素之和，作为函数值返回。二维数组中的值在主函数中赋予。


#include <stdio.h>


int  fun(int x[][5])
{
    int i,j,sum=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            if(j==0 || j==4 || i==0 || i==3)
                sum += x[i][j];
    }


    return sum;
}

int main(void)
{
    int a[4][5] ={{1,3,5,7,9},{2,4,6,8,10},{3,4,5,6,7},{4,5,6,7,8}};
    int result,i,j ;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
          printf("%3d",a[i][j]);
        
        printf("\n");
    }

    result = fun(a);

    printf("\n二维数组周边元素之和:%d\n",result);

    return 0;
}
