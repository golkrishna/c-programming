
#include <stdio.h>

int main(){
	float principle, rate, time;
	printf("Enter principal Amount : ");
	scanf("%f", &principal);
	printf("Enter rate Of Interest : ");
	scanf("%f", &rate);
	printf("Enter time : ");
	scanf("%f", &time);
	printf("Simple Interest Is : %f", (principle * rate * time) / 100);
	return 0;
}
