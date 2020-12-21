输入一个字符串，将串中大写字母变为小写，小写字母变为大写，其他符号不变。

#include <stdio.h>
int main()
{
	char ch[20],s;
	int i=0;
 
	gets(ch);
    while((s=ch[i])!='\0')
	{
	    if(s>='a'&& s<='z')
			ch[i]-=32;
		else if(s>='A'&& s<='Z')
			ch[i]+=32;
   	i++;	
	}

	//输出变换后字符串
	puts(ch);
	return 0;
}
