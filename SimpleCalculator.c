#include<stdio.h>

int main(void)
{
	int FirstNum , SecondNum, Addition ,Subtraction, Anding, Oring, Xoring;
	
	printf("\nPlease Enter Two to apply Mathmatical Operations!\n");
	scanf("%d \n%d",&FirstNum,&SecondNum);
	
	Addition = FirstNum + SecondNum;
	Subtraction = FirstNum - SecondNum;
	Anding = FirstNum & SecondNum;
	Oring = FirstNum | SecondNum;
	Xoring = FirstNum ^ SecondNum;
	
	printf("Addition = %d \nSubtraction = %d \nAnding = %d \nOring = %d \nXoring= %d \n",Addition ,Subtraction, Anding, Oring, Xoring);
}