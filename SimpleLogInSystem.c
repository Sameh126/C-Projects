#include<stdio.h>

int main (void)
{
	//Identify needed variables
	int Counter, ID, Password;
	Counter = 0; 
	
	//welcoming & get User ID
	printf("Hello Mr or Ms ^_^ \nPlease Enter Ur ID: ");
	scanf("%d",&ID);
	
	//comparing if the ID is exixt & correct or not by Switch
	switch(ID)
	{
		case 2101:
		//Get User Password
			printf("Please Enter Ur Password: ");
			scanf("%d",&Password);
			//Nested Switch to chek if Password is correct
			switch (Password)
			{
				case  1111:
					printf("Welcom Mr Khaled");					
					break;
					
				default:
					printf("Sorry, Wrong Password");
					break;
				
			}
			break;
	
		case 2102:
			printf("Please Enter Ur Password: ");
			scanf("%d",&Password);
			
			switch (Password)
			{
				case  2222:
					printf("Welcom Mr Kamel");
					break;
					
				default:
					printf("Sorry, Wrong Password");
					break;
			}
			break;

		case 2103:
			printf("Please Enter Ur Password: ");
			scanf("%d",&Password);
			
			switch (Password)
			{
				case  3333:
					printf("Welcom Ms Israa");
					break;
					
				default:
					printf("Sorry, Wrong Password");
					break;
			}
			break;
					
		case 2104:
			printf("Please Enter Ur Password: ");
			scanf("%d",&Password);
			
			switch (Password)
			{
				case  4444:
					printf("Welcom Mr Karim");
					break;
					
				default:
					printf("Sorry, Wrong Password");
					break;
			}
			break;
							
		case 2105:
			printf("Please Enter Ur Password: ");
			scanf("%d",&Password);
			
			switch (Password)
			{
				case  5555:
					printf("Welcom Mr Rami");
					break;
					
				default:
					printf("Sorry, Wrong Password");
					break;
			}
			break;

					
		default:
			printf("Sorry This ID is not Existed");
			break;
				
	}
}

//p.s Switch are repeated each user has its switch with its unique details 