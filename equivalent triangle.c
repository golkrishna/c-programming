#include <stdio.h>
#include <math.h>

int main(){
	float side, area,root_three;
	printf("Enter The Side : ");
	scanf("%f", &side);
	root_three = sqrt(3);
	printf("Area Of Equilateral triangle %f is %f:",side,  (root_three / 4) * (side * side));
}
