#include<stdio.h>
int Add (int Operant_1 , int Operant_2);
int Subtract (int Operant_1 , int Operant_2);
int Multiply (int Operant_1 , int Operant_2);
int Divide (int Operant_1 , int Operant_2);
int And (int Operant_1 , int Operant_2);
int Or (int Operant_1 , int Operant_2);
int Not (int Operant_1);
int Xor (int Operant_1 , int Operant_2);
int Reminder (int Operant_1 , int Operant_2);
int Increment (int Operant_1);
int Decrement (int Operant_1);

int main (void)
{
	int Operation_ID , Operant_1 , Operant_2 ; 
	int Calculation = 0 ;
	printf("Please Enter Operation Number According to the Following List : \n");
	printf("1- Add \n2- Subtract\n3-Multiply \n4- Divide \n5- And \n6- Or \n7- Not \n8- Xor \n9- Reminder \n10-Increment \n11- Decrement \n");
	
	scanf("%d" , &Operation_ID);
	if (Operation_ID == 7 || Operation_ID == 10 || Operation_ID == 11)
	{
		printf("Please Enter one Operand: \n");
		scanf("%d", &Operant_1);
	}
	else
	{
		printf("Please Enter Operand 1 and Operand 2: \n");
		scanf("%d %d", &Operant_1 , &Operant_2);
	}
	
	switch (Operation_ID)
	{
		case 1:
			Calculation = Add(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 2:
			Calculation = Subtract(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 3:
			Calculation = Multiply(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 4:
			Calculation = Divide(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 5:
			Calculation = And(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 6:
			Calculation = Or(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 7:
			Calculation = Not(Operant_1) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 8:
			Calculation = Xor(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 9:
			Calculation = Reminder(Operant_1,Operant_2) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 10:
			Calculation = Increment(Operant_1) ;
			printf("Result = %d" , Calculation);
			break;
			
		case 11:
			Calculation = Decrement(Operant_1) ;
			printf("Result = %d" , Calculation);
			break;
	}
	
}

int Add (int Operant_1 , int Operant_2)
{
	int Sum ;
	Sum = Operant_1 + Operant_2 ;
	
	return Sum;
}

int Subtract (int Operant_1 , int Operant_2)
{
	int Subtraction ;
	Subtraction = Operant_1 - Operant_2 ;
	
	return Subtraction;
}

int Multiply (int Operant_1 , int Operant_2)
{
	int Multiple ;
	Multiple = Operant_1 * Operant_2 ;
	
	return Multiple;
}

int Divide (int Operant_1 , int Operant_2)
{
	int Divide ;
	Divide = Operant_1 / Operant_2 ;
	
	return Divide;
}

int And (int Operant_1 , int Operant_2)
{
	int And ;
	And = Operant_1 & Operant_2 ;
	
	return And;
}

int Or (int Operant_1 , int Operant_2)
{
	int Or ;
	Or = Operant_1 | Operant_2 ;
	
	return Or;
}

int Not (int Operant_1)
{
	int Not;
	Not = !Operant_1;
	
	return Not ;
}

int Xor (int Operant_1 , int Operant_2)
{
	int Xor ;
	Xor = Operant_1 ^ Operant_2 ;
	
	return Xor ;
}

int Reminder (int Operant_1 , int Operant_2)
{
	int Reminder ;
	Reminder = Operant_1 % Operant_2 ;
	
	return Reminder;
}

int Increment (int Operant_1)
{
	int Increment ;
	Increment = ++Operant_1;
	
	return Increment;
}

int Decrement (int Operant_1)
{
	int Decrement ;
	Decrement = --Operant_1 ;
	
	return Decrement;
}





















