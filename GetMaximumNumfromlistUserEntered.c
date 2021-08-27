#include <stdio.h>

int main (void)
{
	int Counter = 1, CounterTwo=1, Value, Flage = 0 ;
	int List[10];
	
	printf("Hello, Please Enter Ten Number then enter a Number to find \nand I will Return to U If it is exist or not and its Number in order u entered \n");
	
	for (Counter ; Counter < 11 ; Counter++)
	{
		printf("Please Enter Number %d: ",Counter);
		scanf("%d",&List[Counter-1]);
	}
	
	printf("Enter Number to find ");
	scanf("%d" , &Value);
	
	for (CounterTwo ; CounterTwo < 11 ; CounterTwo++)
	{
		if (Value == List[CounterTwo-1] )
		{
			printf("Yes,It is Existed and It's Number in the list is: %d",CounterTwo);
			Flage = 1;
			break;
		}
			
		else 
		{

		}
	}
	
	if (Flage == 0)
	{
		printf("No,It is not Existed");
	}
	else
	{
		
	}
}