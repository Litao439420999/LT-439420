20.将字符串str1插入到字符串str2中pos指定的位置处。
如 str1：ABCD123  换为：
如：str2:abcddef ,在位置3插入str1 abcABCD123ddef 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str1[]="ABCD123";
	char str2[20]="abcddef",ch[10];
	int n,i,j,k,len;
	
	len = strlen(str2);
	printf("input n:");scanf("%d",&n);
	
	if(n>len)
	{
		printf("input n error!");exit(0);
	}
	
	for(i=n,j=0;str2[i]!='\0'|| str1[j]!='\0';i++,j++)
	{
		ch[j] = str2[i];
		str2[i] = str1[j];
	}

	for(i,j=0;ch[j]!='\0';i++,j++)
	str2[i] = ch[j];
	
	str2[i] = '\0';
	
	printf("输出插入后str2:%s\n",str2);
	
	return 0;
	
	
}
