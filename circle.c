#include<stdio.h>

int main()
{
	int r;
	printf("Enter radius:");
	scanf("%d",&r);
	printf("Diameter is %d\n",2*r);
	printf("Circumference is %f\n",2*3.14*r);
	printf("Area is %f",3.14*r*r);
	return 0;
}
