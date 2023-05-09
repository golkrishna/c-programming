#include<stdio.h>
int main(){
	int days;
	printf("Enter the days");
	scanf("%d",&days);
	printf("No.of years is %d\n",days/365);
	printf("No.of weeks is %d\n",days/7);
	printf("No.of days is %d",days/1);
	return 0;
}
