// 下面程序的功能是将八进制正整数字符串转换为十进制整数。请选择填空。

#include <stdio.h>
int main()
{
    char *p,s[6];
    int n;

    p = s;
    gets(p);
    n =*p-'0';
    while(*(++p)!='\0') n=n*8+*p-'0';

    printf("%d\n",n);

    return 0;
}