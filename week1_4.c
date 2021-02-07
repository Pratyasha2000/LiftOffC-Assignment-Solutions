#include<stdio.h>
int main()
{
	int phy,chem,bio,maths,comp,per,a;
	printf("Total marks in each subject is 100.\n");
	printf("Enter the Marks of Physics,Chemistry,Biology,Mathematics & Computer respectively :");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);
	per= (phy+chem+bio+maths+comp)/5;
	

	if(per>=90)
		printf("\nGrade A\n");
	if(per>=80 && per<90)
		printf("\nGrade B\n");
	if(per>=70 && per<80)
		printf("\nGrade C\n");
	if(per>=60 && per<70)
		printf("\nGrade D\n");
	if(per>=40 && per<60)
		printf("\nGrade E\n");
	else if(per<40)
		printf("\nGrade F\n");
	return 0;
}

