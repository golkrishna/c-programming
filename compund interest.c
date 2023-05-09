#include <stdio.h>
#include <math.h>

int main(){
	float principle, rate, time, ci;
	printf("Enter principal Amount : ");
	scanf("%f", &principle);
	printf("Enter rate Of Interest : ");
	scanf("%f", &rate);
	printf("Enter time : ");
	scanf("%f", &time);
	ci = principle * pow((1 + rate / 100), time);
	printf("Coumpund Interest Is : %f", ci);
	return 0;
}
