#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number; ");
	scanf("%d",&x);
	if(x%3==0 || x%2==0)
		printf("Divisible");
	else	
		printf("Not divisible");
	return 0;	
}
