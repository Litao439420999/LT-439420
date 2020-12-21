从键盘输入一个字符串，求该字符串长度。

#include <stdio.h>
int main()
{
  char ch[20];
  int i = 0;

  printf("输入字符串:\n");
  gets(ch);

  while(ch[i]!='\0')i++;

  printf("%s字符串长度：%d\n",ch,i);

  return 0;

}
