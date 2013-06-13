#include<stdio.h>
#include<math.h>

double mysqrt( double y) 
{
	double x=y/2;
	double diff=x*x-y;
	while ( abs(diff)>= 0.0) {
		if (diff > 0) 
			x = (x + y) / 2;
		else
			x = x / 2;
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
