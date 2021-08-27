#include<stdio.h>

int MaximumNumber (int ValueOne , int ValueTwo , int ValueThree , int ValueFour)
{
	int Counter, Maximum ;
	int ListOfNum[4] = {ValueOne , ValueTwo , ValueThree , ValueFour};
	Counter = 0 , Maximum = 0;

	for (Counter ; Counter < 4 ; Counter++)
	{
		if (Maximum <= ListOfNum[Counter])
		{
			Maximum = ListOfNum[Counter];
		}
		
		else if ( Maximum > ListOfNum[Counter])
		{
			//No Change
		}
	}
	
	return Maximum ;
}

int MinimumNumber (int ValueOne , int ValueTwo , int ValueThree , int ValueFour)
{
	int Counter, Minimum;
	int ListOfNum[4] = {ValueOne , ValueTwo , ValueThree , ValueFour};

	Counter = 0 , Minimum = ValueOne;
	
	for (Counter ; Counter < 4 ; Counter++)
	{
		if (Minimum < ListOfNum[Counter+1])
		{
			//No Change
		}
		
		else if (Minimum > ListOfNum[Counter+1] ) 
		{
			Minimum = ListOfNum[Counter+1];
		}
	}
	
	return Minimum;
}

int main (void)
{
	int Value , Counter = 0 , MaximumNum , MinimumNum, ListOfNum[4];
	
	printf("Hello, Please Enter 4 Number and I will Return the Maximum one and the Minimum One\n");
	
	for (Counter ; Counter < 4 ; Counter++)
	{
		scanf("%d",&Value);
		ListOfNum [Counter] = Value;
	}
	
	MaximumNum = MaximumNumber(ListOfNum[0] , ListOfNum[1] , ListOfNum[2] , ListOfNum[3]);
	MinimumNum = MinimumNumber(ListOfNum[0] , ListOfNum[1] , ListOfNum[2] , ListOfNum[3]);
	
	printf("The Maximium Number is: %d \nThe Minimum Number is: %d",MaximumNum , MinimumNum);
	
	
	
}