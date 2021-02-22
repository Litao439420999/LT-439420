// 下面程序功能是递归法将一个整数存放到一个字符数组中。存放时按逆序存放。如483存放成"384",请选择填空。

#include <stdio.h>
void convert(char *a , int n)
{
    int i;

    if((i=n/10)!=0)
      convert( a+1,i);

      *a =n%10+'0' ;
}

int main(void)
{
    int number;
    char str[10];
    scanf("%d",&number);
    convert(str, number);

    puts(str);

    return 0;
}