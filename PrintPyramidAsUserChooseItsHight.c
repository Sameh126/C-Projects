#include<stdio.h>

int main (void)
{
	//Identify Needed Variables
	int Basic_Counter = 0 , PyramidHieght , Counter; 
	
	//scan pyramid hieght
	printf("Please Enter the Hieght of pyramid U wanaa to be printed: ");
	scanf("%d",&PyramidHieght);
	
	//for loop for pyramid hieght
	for (Basic_Counter ; Basic_Counter < PyramidHieght ; Basic_Counter++)
	{
		//printing stars in each line
		for (Counter=0 ; Counter < PyramidHieght-1-Basic_Counter ; Counter++)
		{
			printf(" ");
		}
		
		//take a space on each line opposite to number of stars
		for (Counter=0 ; Counter < 2*Basic_Counter+1 ; Counter++)
		{
			printf("*");
		}	
		printf("\n");	
	}
}
