#include<stdio.h>
#include<math.h>

double mysqrt( double y) 
{
	double x1 = 0, x2 = y, x = (x1 + x2) / 2;
	double diff=x*x-y;
	while ( fabs(diff)>= 0.001) {
		if (diff > 0) {
			x2 = x; 
			x = (x1 + x2) / 2;
		}
		else {
			x1 = x;
			x = (x1 + x2) / 2;
		}
		diff = x * x - y;
	}
	return x;
}

int main(void)
{
	double y;
	scanf("%lf", &y);
	printf("%f\n", mysqrt(y));
	return 0;
}
