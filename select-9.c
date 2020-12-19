输入某学生语文课程的成绩，输出该成绩的等级。判断规则为：如果成绩在90-100的范围内，则等级为A；若成绩在80-89的范围内，则等级为B；若成绩在70-79的范围内，则等级为C；若成绩在60-69的范围内，则等级为D；若少于60分，则等级为F。（要求：用switch语句实现。）
#include <stdio.h>
int main()
{
	int score;
	char ch;
	
	printf("输入分数:");
	scanf("%d",&score);
	
	switch(score/10)
	{
		case 10:
		case 9: ch = 'A';break;
		case 8: ch = 'B';break;
		case 7: ch = 'C';break;
		case 6: ch = 'D';break;
		default: ch = 'F';	
	}
	
	printf("%d分的等级：%c\n",score,ch);
	return 0;
}	
