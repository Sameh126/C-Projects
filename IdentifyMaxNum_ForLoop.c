#include<stdio.h>

int main (void)
{
	//Identify Needed Variables
	int Counter , Value ,Store;
	int ListOfNum[3];
	Counter = 0 , Store = 0;
	
	printf("Hello, Please Enter 3 Number and I will Return the Maximum one\n");
	
	//loop to get 3 numbers from user
	for (Counter ; Counter < 3 ; Counter++)
	{
		scanf("%d",&Value);
		ListOfNum [Counter] = Value;
	}
	
	Counter = 0 ; 
	
	//loop to identify the bigger number in the array
	for (Counter ; Counter < 2 ; Counter++)
	{
		if (ListOfNum[Counter] > ListOfNum[Counter+1])
		{
			Store = ListOfNum[Counter];
		}
		
		else 
		{
			Store = ListOfNum [Counter+1];
		}
	}
	
	printf("The Maximium Number is: %d",Store);
	
	
	
}