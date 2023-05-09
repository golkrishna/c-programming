#include<stdio.h>
#include<math.h>
int main(){
	float a,b;
	printf("Enter first angle:");
	scanf("%f",&a);
	printf("Enter second angle:");
	scanf("%f",&b);
	printf("Third angle is %f",180-(a+b));
	return 0;
}
