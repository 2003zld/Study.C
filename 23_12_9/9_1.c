#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("结果为%d\n", sum);
	return 0;
}