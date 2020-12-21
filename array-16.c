将10个字符串排序。

#include <stdio.h>
#include <string.h>

int main()
{
  char str[10][50],ch[50];
  int i,j,k;

  //输入10个字符串
  for(i=0;i<10;i++)
	  gets(str[i]);

  //冒泡排序
  for(i=0;i<10-1;i++)
  {
    for(j=0;j<10-i-1;j++)
	{
	  if(strcmp(str[j],str[j+1])>0)
	  {
	    strcpy(ch,str[j]);
		 strcpy(str[j],str[j+1]);
		 strcpy(str[j+1],ch);	  
	  }	
	}  
  }
  printf("\nsorted:\n");
  for(i=0;i<10;i++)
	  puts(str[i]);

  //简单选择排序
  for(i=0;i<10-1;i++)
  {
    k = i;
	  for(j=i+1;j<10;j++)
		if(strcmp(str[k],str[j])>0)k = j;

	strcpy(ch,str[i]);
	strcpy(str[i],str[k]);
	strcpy(str[k],ch);
  
  }

 printf("\nsorted:\n");
  for(i=0;i<10;i++)
	  puts(str[i]);

  return 0;


}
