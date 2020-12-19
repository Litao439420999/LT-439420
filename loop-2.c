for语句实现找出一个整数的所有因子。

include<stdio.h>
int main()
{
	int i,n;
	printf("输入整数:");scanf("%d",&n);
	for( i=1; i<=n; i++)
    {
        if(n%i == 0)
        printf("%d\t",i);
    }
    return 0;
}
