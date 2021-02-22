// 下面程序的功能是在字符串str中找出最大的字符并放在第一个位置上，并将该字符前的原字符往后顺序移动，如chyab变成ychab.  请选择填空。

#include <stdio.h>
int main(void)
{
    char str[80],*p, max, *q;

    p = str; 
    gets(p);

    max = *p++;  //*(p++)

    while(*p!='\0')
    {
        if(max<*p){ max = *p;  q=p;}

        p++;
    }

    p = q;

    while( p >str ){  *p = *(p-1);   p-- ; }
    *p = max;
    puts(p);

	return 0;


}