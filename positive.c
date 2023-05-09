#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d" ,&x);
	if(x>0)
	{
		printf("Positive");
		
	}
	if(x<=0)
	{
		printf("Not Positive");
	}
	getch();
}
