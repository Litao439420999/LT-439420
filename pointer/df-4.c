// 当运行以下程序时，从键盘输入"Happy!<CR>" (<CR>表示回车)，则下面程序的运行结果是      。

#include <stdio.h>
#include <string.h>
int stre(char str[]);

int main()
{
    char str[10],*p=str;

    gets(str);

    printf("%d\n",stre(p));
}
int stre(char str[])
{
    int num=0;
    while(*(str+num)!='\0')
        num++;
    
    return num;
}