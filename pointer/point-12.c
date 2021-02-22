// 下面程序的功能是将字符串s中的内容逆序输出，但不改变串中的内容，请选择填空。

#include <stdio.h>
void inverp(char *a);

int main(void)
{
    char s[10]="hello!";
    inverp(s);

    return 0;
}

void inverp(char *a)
{
    if( *a!='\0' ) 
    inverp(a+1);

    printf("%c",*a);

   
}
