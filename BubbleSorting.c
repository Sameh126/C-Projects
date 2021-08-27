#include <stdio.h>
void Swap (int *Number_1 , int *Number_2);
void BubleSorting (int Array[] , int ArraySize);

int main (void)
{	
	int Array [10] = {6,7,8,10,2,1,3,0,18,5};
	
	BubleSorting(Array , 10);
}

void Swap (int *Number_1 , int *Number_2)
{
	int Ptr1 ; 
	
	Ptr1 = *Number_1;
	*Number_1 = *Number_2;
	*Number_2 = Ptr1;
}

void BubleSorting (int Array[] , int ArraySize)
{
	for (int Counter_1 = 0 ; Counter_1 < ArraySize-1 ; Counter_1++)
	{
		for (int Counter_2 = 0 ; Counter_2 < (ArraySize-1-Counter_1) ; Counter_2++)
		{
			if (Array[Counter_2] > Array[Counter_2+1])
			{
				Swap( &Array[Counter_2] , &Array[Counter_2+1]);
			}
		}
	}
		
	for (int Counter_1 = 0 ; Counter_1 < ArraySize ; Counter_1++)
	{
		printf("%d ",Array[Counter_1]);	
	}
} 