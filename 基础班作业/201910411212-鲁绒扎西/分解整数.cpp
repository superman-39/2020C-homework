#include<stdio.h>
void func(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	if (n < 10)
	{
		printf("'%c'\t", n + '0');
		return 0;
	}
	func(n / 10);

	printf("'%c'\t", n % 10 + '0');
}

int main()
{
	int n;
	printf("请输入一个整数：");
	scanf_s("%d", &n);
	func(n);
	return 0;
}
