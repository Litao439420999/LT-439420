求1!+2!+3!....+20!的和(嵌套循环)

#include <stdio.h>
int main()
{
	int i,j,t;
	long int sum=0; //注意这里
	
	for(i=1;i<=20;i++)
	 {
	 	t = 1;
	 	for(j=1;j<=i;j++)
	 	  t*=j;
	 	  
	 	  sum+=t;
	 }
	 
	 printf("1! + 2! + 3! + 4! + 5!+...... +20!=%d\n",sum);
	 
	 return 0;

}

