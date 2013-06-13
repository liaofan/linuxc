#include<stdio.h>

double mypow(double x, int n)
{
	if (n > 1) {	
		if (n%2 == 0) 
			return mypow(x*x, n/2);
		else
			return mypow(x*x, n/2)*x;
	}
	else
		return x;
}

int main(void)
{
	double x;
	int n;
	scanf("%lf, %d", &x, &n);
	printf("%f\n", mypow(x, n));
	return 0;
}
