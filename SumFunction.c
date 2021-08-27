#include<stdio.h>

//Crate Sum Function by get two nums and return their sumation
int Sum (int firstnum , int secondnum)
{
	int Sum ; 
	Sum = firstnum + secondnum ;
	return Sum ;
}

int main (void)
{
	int Sumation, FirstNum, SecondNum;
	
	//get 2 nums from user 
	printf("Welcome....\nPlease Enter Two Number to sum them\n");
	scanf("%d %d",&FirstNum , &SecondNum);
	
	//sum two scaned numbers
	Sumation = Sum(FirstNum , SecondNum);
	
	
	printf("Sumation is Equal: %d",Sumation);	
	//program will still opened till u close it with ur own
	while (1)
	{
		
	}
}