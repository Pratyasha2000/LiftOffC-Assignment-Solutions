#include<stdio.h>
#include<math.h>
int main()
{
        int rad,dia;
        float pi,area,circum;
        printf("Enter the radius of circle :");
        scanf("%d",&rad);

        pi=3.14;
	dia= 2*rad;
        area = pi*rad*rad;
        circum = 2*pi*rad;
	printf("\nDiameter =%d\n",dia);
        printf("Area = %f\n",area);
        printf("Circumference = %f\n",circum);
        return 0;
}

