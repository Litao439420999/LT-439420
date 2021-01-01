写一个函数，使给定的一个二维数组（3×3）转置，即行列互换。 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shift(int a[][3])
{
    int  i, j, t;

    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
}

int main(void)
{
     int a[3][3] ,i,j ;

     srand(time(0));
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             a[i][j] = rand()%50 + 1;
             printf("%5d",a[i][j]);
         }

         printf("\n");
     }

     printf("\n\n");

     shift(a);

     for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
            printf("%5d",a[i][j]);
        printf("\n");

      }  
           
    return 0;
}
