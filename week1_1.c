#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter two numbers a & b: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("\na+b = %d\n",c);
	printf("a-b = %d\n",d);
	printf("a*b = %d\n",e);
	printf("a/b = %d & remainder = %d\n",f,g);

	return 0;
}

