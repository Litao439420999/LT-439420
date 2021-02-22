// 下面程序的功能是按字典顺序比较两个字符串s,t的大小，如果s大于t则返回正值，等于则返回0,小于则返回负值。请选择填空。

#include <stdio.h>

int s(char *s, char *t)
{
    for(; *s==*t; s++,t++)
        if(*s=='\0') return 0;
    return (*s-*t);
}

int main()
{
    char a[20],b[10],*p,*q;
    int i;

    p = a;
    q = b;

    scanf("%s%s",a,b);
    i = s(p,q);
    printf("%d",i);

    return 0;
}