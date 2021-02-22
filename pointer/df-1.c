// 下面程序的功能是用递归算法将一个整数转换成字符形式输出。例如输入483，应输出字符串“483”。请选择填空。

#include <stdio.h>
void  convert(int n)
{
    int i;

    if(  (i=n/10)!= 0)
        convert(i);
    putchar(n%10+'0');    
}
int main()
{
    int number;
    
    scanf("%d",&number);

    if(number < 0)
    {
        putchar('-');
        number = -number;
    }

    convert(number);

    return 0;
}