8.编写一个程序，实现下述三色球问题；在12个球中，有红色球3只，白色球3只和黑色球6只。试问如果从12只球中取出8只（循环嵌套）

#include <stdio.h>
int main()
{
	int red,white,black;
	
	for(red=1;red<4;red++)
	  for(black=1;black<7;black++)
	    for(white=1;white<4;white++)
	      if(8==red+black+white)
	       printf("red:%d\tblack:%d\twhite:%d\n",red,black,white);
	       
	return 0;
}


