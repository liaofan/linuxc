#include<stdio.h>

double mypow(double x, int n)
{
	double remain=1, product=x;
	while (n > 1) {
		if (n % 2 == 1)
			remain *= product;
		product *= product;
		n = n / 2;
	}
	return product*remain;
}

int main(void)
{
	double x;
	int n;
	scanf("%lf, %d", &x, &n);
	printf("%f\n", mypow(x, n));
	return 0;
}
