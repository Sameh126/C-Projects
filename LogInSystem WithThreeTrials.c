#include<stdio.h>


int main (void)
{
	//Identify Needed Variables
	int Counter, ID, Password, Flage = 0;
	Counter = 0; 
	
	//Scan User ID
	printf("Hello Mr or Ms ^_^ \nPlease Enter Ur ID: ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		// Check on right ID
		case 1234:
			printf("Please Enter Ur Password & u Have Three Trials: ");
			//scanf("%d",&Password);
			
			//Check on right ID 3 times only then program close if them ended
			for (Counter = 0 ; Counter < 3 ; Counter++)
			{
				scanf("%d",&Password);
				
				switch (Password)
				{
					if (Flage == 0 )
					{
						case  7788:
							printf("Welcom Mr Ahmed");
							Counter = 4;
							Flage = 1;
							break;
						
						default:
							printf("Try Again: ");

					}
				}
			}
			
			//if flage equal 0 it means that it didn't work in the 3 times so system will close
			if (Flage == 0)
			{
				printf("U get all ur trials, Sorry Wrong Password");
			}

			break;
		
		case 5678:

			printf("Please Enter Ur Password & u Have Three Trials: ");
			//scanf("%d",&Password);

			for (Counter = 0 ; Counter < 3 ; Counter++)
			{
				scanf("%d",&Password);
				
				switch (Password)
				{
					if (Flage == 0 )
					{
						case  5566:
							printf("Welcom Mr Amr");
							Counter = 4;
							Flage = 1;
							break;
						
						default:
							printf("Try Again: ");

					}
				}
			}
			
			if (Flage == 0)
			{
				printf("U get all ur trials, Sorry Wrong Password");
			}

			break;
			
		case 9870:

			printf("Please Enter Ur Password & u Have Three Trials: ");
			//scanf("%d",&Password);

			for (Counter = 0 ; Counter < 3 ; Counter++)
			{
				scanf("%d",&Password);
				
				switch (Password)
				{
					if (Flage == 0 )
					{
						case  1122:
							printf("Welcom Mr Wael");
							Counter = 4;
							Flage = 1;
							break;
						
						default:
							printf("Try Again: ");

					}
				}
			}
			
			if (Flage == 0)
			{
				printf("U get all ur trials, Sorry Wrong Password");
			}

			break;
				
		default:
			printf("Sorry This ID is not Existed");
			break;
				
	}
}