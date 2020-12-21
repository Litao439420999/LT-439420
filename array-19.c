有一篇文章，共有3行文字，每行有80个字符。要求分别统计出其中英文大写字母、小写字母、数字、空格以及其它字符的个数。

#include <stdio.h>
int main()
{
   char str[3][80];
   int i,j;
   int big=0,small=0,digit=0,blank=0,other=0;

   for(i=0;i<3;i++)
	   gets(str[i]);

   for(i=0;i<3;i++)
   {
     for(j=0;str[i][j]!='\0';j++)
		 if(str[i][j]<='Z'&&str[i][j]>='A')
			 big++;
		 else if(str[i][j]<='z'&&str[i][j]>='a')
			 small++;
		 else if(str[i][j]<='9'&&str[i][j]>='0')
			 digit++;
		 else if(str[i][j]==' ')
			 blank++;
		 else
			 other++;
   
   }

   printf("\n大写字母:%d\n小写字母:%d\n数字字母:%d\n空白字母:%d\n其它字母:%d\n",big,small,digit,blank,other);

   return 0;

}
