#include<stdio.h>
int main()
{
        double  f,c;
	printf("Enter the temperature in degree Celsius:");
	scanf("%lf",c);
	f=(1.8*c)+32;
	printf("\nTemp. in degree Fahrenheit is: %lf\n",f);

	return 0;

}
