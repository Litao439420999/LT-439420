1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 

#include <stdio.h>
int main()
{
    int i;
	double sum=0;

	for(i=1;i<101;i++)
	  	sum += (i%2)?1.0/i:-1.0/i;

	printf("sum=%.2lf\n",sum);
	return 0;
}
