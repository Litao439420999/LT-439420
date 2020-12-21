将串t复制到串s中，复制时要求将 t中第n个字符之后的字符移到串s的开头，其它字符顺序后移。 如：ABCD123  换为：123ABCD（n=4）。


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char  t[]="ABCD123";
	char  s[20];
	int i,j,n,len;
	
	printf("需截取字符的位置：");scanf("%d",&n);
	len = strlen(t);
	
	if(n>len) {
			printf("需截取字符的位置无效，返回！\n");exit(0);	
	}
	
	i = n;j=0;
  
	while(t[i]!='\0')
	{
		s[j++] =t[i];
		i++;
	}
	for(j,i=0;j<len;i++)
	{
		s[j++] = t[i];
	}
	s[j]='\0';
	
	printf("output array s:%s\n",s);
	    
	return 0;
	
	
}
