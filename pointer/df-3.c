// 下面程序的功能是将字符串a的所有字符传送到字符串b中，要求每传送三个字符后再存放一个空格，例如字符串a为“abcdefg",则字符串b为”abc def g“,请选择填空。

#include <stdio.h>
int main(void)
{
    int i,k=0;
    char a[80],b[80],*p;

    p = a;
    gets(p);

  
   
        for(i=0;  *p!='\0' ; p++,k++,i++)
       { 
          
            if( i%3==0 && i!=0)
             {
               b[k]=' ';
               k++;
            }

             b[k]=*p;
       }
  
    b[k]='\0';
    puts(b);
}