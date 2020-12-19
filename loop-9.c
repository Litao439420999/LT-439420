输出100～200之间能被12整除的所有数。

#include <stdio.h>
int main()
{
	int n;
	
	for(n=100;n<201;n++)
	  if(!(n%12))
	  printf("%d\t",n);
	  
	  return 0;
}

