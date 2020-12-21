判断一个字符串是否是回文。如：level

#include <stdio.h>
#include <string.h>

int main()
{
  char str[20];
  int i,j,len;
  int flag=1;

  printf("input string:\n");
  gets(str);

  len = strlen(str);

  for(i=0,j=len-1;i<j;i++,j--)
  {
     if(str[i]!=str[j])
	 {	   flag =0; break;}
   }

  if(flag)
	  printf("%s是回文\n",str);
  else
	  printf("%s不是回文\n",str);

	  return 0;

}
