#include <stdio.h>
#include <math.h>

int main(){
	float sub1,sub2,sub3,sub4,sub5,total,max,percentage;
	printf("Enter marks Of First Subject : ");
	scanf("%f", &sub1);
	printf("Enter marks Of Second Subject : ");
	scanf("%f", &sub2);
	printf("Enter marks Of Third Subject : ");
	scanf("%f", &sub3);
	printf("Enter marks Of Fourth Subject : ");
	scanf("%f", &sub4);
	printf("Enter marks Of Fifth Subject : ");
	scanf("%f", &sub5);
	printf("Enter maximum marks");
	scanf("%d",&max);
	total=sub1+sub2+sub3+sub4+sub5;
	printf("Total marks is %f\n",total);
	printf("Average of total marks is %f\n",total/5);
	percentage=total/max*100;
	printf("Percentage is %f",percentage);
	return 0;

	

}
