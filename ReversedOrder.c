#include<stdio.h>

int main(void)
{
	//Identify Variables I will reverse
	int FirstNum , ScondNum , ThirdNum ;
	
	// Get the first variable
	printf("\nPlease Enter First Number : ");
	scanf("%d",&FirstNum);
	
	// Get the second variable
	printf("Please Enter Second Number : ");
	scanf("%d",&ScondNum);
	
	// Get the third variable
	printf("Please Enter Third Number : ");
	scanf("%d",&ThirdNum);	
	
	//print then in a reversed order 
	printf("Third Number = %d \nSecond Number = %d\nFirst Number = %d\n",ThirdNum , ScondNum , FirstNum);
}
