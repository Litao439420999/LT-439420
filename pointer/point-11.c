// 以下程序的功能是删除字符串s中所有的空格（包括TAB符，回车符，换行符）,请选择填空。

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void delspace(char *p);

int main(void)
{
  char c, s[80];
  int i=0;
  c = getchar();

  while(c!= EOF ){ s[i]=c; i++; c = getchar();}

  s[i]='\0';
  delspace(s);
  
  puts(s);

  return 0;

}

void delspace(char *p)
{
    int i,t;
    char c[80];
    
    for(i=0,t=0; p[i] ; i++)
    {
        if(!isspace(*(p+i))) c[t++] = p[i];
    }

    c[t] = '\0';
    strcpy(p,c);
}