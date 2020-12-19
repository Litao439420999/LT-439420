统计从键盘输入的若干个字符中有效字符的个数，以换行符作为输入结束。有效字符是指第一个空格符前面的字符，若输入字符中没有空格符，则有效字符为除了换行符之外的所有字符。

#include <stdio.h>
int main()
{
char ch;
	int count=0; //注意这里

	while((ch = getchar())!='\n')
	{
	     if(ch==' ')break;
	  count++;
	
	}
printf("输入的若干个字符中有效字符的个数:%d\n",count);
 return 0;
}
