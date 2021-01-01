//编写一个函数，由实参传来一个字符串，
// 统计此字符串中字母、数字、空格和其它字符的个数，
// 在主函数中输入字符串以及输出上述结果。

#include <stdio.h>

void  fun(char ch[])
{
    int i=0,character=0,digit=0,other=0,blank=0;
    char c;

    while((c=ch[i])!='\0')
    {
        if((c <='z'&& c>='a') || (c<='Z' && c>='A'))
            character++;
        else if(c <='9' && c >='0')
            digit++;
        else if(c==' ')
            blank++;
        else 
            other++;
        
        i++;
    }

    printf("字母的个数:%d\n数字的个数:%d\n空格的个数:%d\n其它字符的个数:%d\n",character,digit,blank,other);
}

int main(void)
{
   char ch[30];

   gets(ch);

   fun(ch);

   return 0;
}


