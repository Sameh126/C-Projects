#include <stdio.h>

int MaximumNumber (int Array[], int ArrayNum);
int MinimumNumber (int Array[], int ArrayNum);
int Sum (int Array[] , int ArrayNum);

int main (void)
{
	// Identify all Needed Variables and Arrayes
	int Counter_1 = 0;
	int Pass_C1 = 0, Pass_C2 = 0, Pass_C3 = 0, TotalPass = 0; 
	int Fail_C1 = 0, Fail_C2 = 0, Fail_C3 = 0, TotalFail = 0;
	
	int MaximumClass1, MinimumClass1, MaximumClass2, MinimumClass2,MaximumClass3, MinimumClass3;
	int MaxGrade , MinGrade ; 
	int Sum_1 = 0 , Sum_2 = 0 , Sum_3 = 0 , Sum_Total = 0 , Average = 0 ;
	int Class_1 [10] = {42,99,62,37,58,64,75,88,46,94};
	int Class_2 [10] = {55,72,63,92,84,75,86,39,47,89};
	int Class_3 [10] = {97,81,22,64,73,77,65,63,94,97};
	
	//For loop to divid srudents to pass and fail and count their number
	for (Counter_1 ; Counter_1 < 10 ; Counter_1++)
	{
		if (Class_1[Counter_1] >= 50)
		{
			Pass_C1++ ;
		}
		
		else 
		{
			Fail_C1++ ;
		}
		
		if (Class_2[Counter_1] >= 50)
		{
			Pass_C2++ ;
		}
		
		else 
		{
			Fail_C2++ ;
		}
		
		if (Class_3[Counter_1] >= 50)
		{
			Pass_C3++ ;
		}
		
		else 
		{
			Fail_C3++ ;
		}
	}
	
	TotalPass = Pass_C1 + Pass_C2 + Pass_C3 ;
	TotalFail = Fail_C1 + Fail_C2 + Fail_C3 ;
	
	//Using MAximum & Minimum functions to get the greatest and the lowest grade in each class
	MaximumClass1 = MaximumNumber(Class_1 , 10);
	MaximumClass2 = MaximumNumber(Class_2 , 10);
	MaximumClass3 = MaximumNumber(Class_3 , 10);
		
	MinimumClass1 = MinimumNumber(Class_1 , 10);
	MinimumClass2 = MinimumNumber(Class_2 , 10);
	MinimumClass3 = MinimumNumber(Class_3 , 10);

	//add the greatest grade of each class in a separeated array
	int MaximumValues[3] = {MaximumClass1 , MaximumClass2 , MaximumClass3};
	MaxGrade = MaximumNumber(MaximumValues , 3);
	
	//add the lowest grade of each class in a separeated array
	int MinimumValues[3] = {MinimumClass1 , MinimumClass2 , MinimumClass3};
	MinGrade = MinimumNumber(MinimumValues, 3);
	
	//Get the average 
	Sum_1 = Sum(Class_1 , 10);
	Sum_2 = Sum(Class_2 , 10);
	Sum_3 = Sum(Class_3 , 10);
	Sum_Total = Sum_1 + Sum_2 + Sum_3 ;
	Average = Sum_Total / 30 ; 
	
	printf("Pass Students Class 1: %d Students , Pass Students Class 2: %d Students , Pass Students Class 3: %d Students \nTotal Passed Students: %d Students \n\n", Pass_C1, Pass_C2, Pass_C3, TotalPass);
	printf("Fail Students Class 1: %d Students , Fail Students Class 2: %d Students , Fail Students Class 3: %d Students \nTotal Failed Students: %d Students \n\n", Fail_C1, Fail_C2, Fail_C3, TotalFail);	
	
	printf("Highest Grade in Class 1: %d , Highest Grade in Class 2: %d ,Highest Grade in Class 3: %d \n",MaximumValues[0] , MaximumValues[1], MaximumValues[2]);
	printf("Lowest Grade in Class 1: %d , Lowest Grade in Class 2: %d ,Lowest Grade in Class 3: %d\n\n",MinimumValues[0] , MinimumValues[1], MinimumValues[2]);

	printf("The Maximum grade in the Three Classes is: %d\n", MaxGrade);
	printf("The Minimum grade in the Three Classes is: %d\n\n",MinGrade);
	
	printf("The Average Grade is: %d \n", Average);
}

int MaximumNumber (int Array[], int ArrayNum)
{
	int Counter, Maximum ;
	Counter = 0 , Maximum = 0;

	for (Counter ; Counter < ArrayNum ; Counter++)
	{
		if (Maximum <= Array[Counter])
		{
			Maximum = Array[Counter];
		}
		
		else if ( Maximum > Array[Counter])
		{
			//No Change
		}
	}
	
	return Maximum ;
}

int MinimumNumber (int Array[], int ArrayNum)
{
	int Counter, Minimum;
	Counter = 0 , Minimum = Array[0];
	
	for (Counter ; Counter < ArrayNum ; Counter++)
	{
		if (Minimum < Array[Counter])
		{
			//No Change
		}
		
		else if (Minimum > Array[Counter] ) 
		{
			Minimum = Array[Counter];
		}
	}
	
	return Minimum;
}

int Sum (int Array[] , int ArrayNum)
{
	int Counter = 0 , Sumation = 0;
	for (Counter ; Counter < ArrayNum ; Counter++)
	{
		Sumation = Sumation + Array[Counter];
	}
	
	return Sumation;
}