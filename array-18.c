n个字符串中查找最大串、最小串。

#include <stdio.h>
#include <string.h>
#define  N   5

int main()
{
   char str[N][10];
   char max[10],min[10];
   int i;

   printf("input string:\n");
   for(i=0;i<10;i++)
	   gets(str[i]);

   strcpy(max,str[0]); 
   strcpy(min,str[0]);


	for(i=1;i<10;i++)
	{
	   if(strcmp(max,str[i])<0)
		   strcpy(max,str[i]);

	   if(strcmp(min,str[i])>0)
		   strcpy(min,str[i]);
	
	}

	printf("\nmax:%s",max);
	printf("\nmin:%s\n",min);

	return 0;
}
