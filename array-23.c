输出杨辉三角前十行

#include <stdio.h>
#define N   20

int main()
{   
   int a[N][N];
	int i,j;
	int n; //表示行数
	
	printf("input line:");scanf("%d",&n);
	
    for(i=0;i<n;i++)
    {
    
    	for(j=0;j<=i;j++)
    	{
    		if(j==0 || j==i)
			{a[i][j] = 1;continue;}
   
			  a[i][j] = a[i-1][j-1]+ a[i-1][j] ;
		}
    	 
	}
	
	printf("\n输出杨辉三角形:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		 printf("%6d",a[i][j]) ;
		 
		 printf("\n");
	}
	
	return 0;
		     
 } 
