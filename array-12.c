输入一数字组成的字符串转化为整型数输出。

#include <stdio.h>
int main()
{
  char ch[20],s;
  int  t=0,i;
  int x;

  puts("输入数字字符串:");gets(ch);
  i=0;
  while((s=ch[i])!='\0')
  {
x = s -'0'; 	t = t*10+x;	  
i++;
  }
  printf("%s转化为整数:%d\n",ch,t);
  return 0;
}
