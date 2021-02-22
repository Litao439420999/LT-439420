// 下面程序的功能是将一个整数字符串转换为一个整数，如"-1234"转换为-1234，请选择填空。

#include <stdio.h>
#include <string.h>

int main()
{
    char s[6];
    int n;

    gets(s);

    if(*s=='-') n = -chnum(s+1);
    else n = chnum(s);

    printf("%d\n",n);

    return 0;
}
int chnum(char *p)
{
    int num=0,k,len,j;
    len = strlen(p);

    for(;*p!='\0';p++)
    {
        k = *p-'0';
        j = (--len);
        while(j--)
        {
            k = k * 10;
        }
        num = num + k;
    }

    return num;
}