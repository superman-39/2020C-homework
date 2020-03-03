#include<stdio.h>
#include<math.h>
int main()
{
	int n = 2, count = 1, sign = -1;
	float x;
	double sum, term;
	printf("input x:");
	scanf_s("%f", &x);
	sum = 1;
	term = 1;
	do
	{
		term = -term * x * x / (n * (n - 1));
		sum += term;
		n = n + 2;
		count++;
	} while (fabs(term) >= 1e-6);
	printf("cos(x)=%f,count=%d\n", sum, count);
}
