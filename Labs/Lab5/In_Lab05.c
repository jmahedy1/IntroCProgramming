/*=====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab05
 Lab Session time: Online Student
 Program Description: This program will convert your F to C or C to F.
=======================================================================*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>

//Function prototypes
void display_myInfo();
void display_menu();
float f_to_c(float);
float c_to_f(float);

//Main function:
int main()
{
	//Declare Variables
	int choice = 0;
	float tempurature, new_temp;

	//Call display_myinfo and display_menu
	display_myInfo();
	display_menu();

	//Prompt user for selection
	printf("Enter your choice: ");
	scanf("%d", &choice);
	printf("\n\n");

	//Switch statement
	switch (choice) 
	{
		case 1:
			printf("Enter the tempurature you want to convert to Celsius: ");
			scanf("%f", &tempurature);
			new_temp = f_to_c(tempurature);
			printf("The tempurature in Celsius is %.2f", new_temp);
			break;
		case 2:
			printf("Enter the tempurature you want to convert to Fahrenheit: ");
			scanf("%f", &tempurature);
			new_temp = c_to_f(tempurature);
			printf("The tempurature in Fahrenheit is %.2f", new_temp);
			break;
		default:
			printf("Invalid input.");
	}

	return 0;	//End the program
}

/*******************************************************************
	Function: display_myInfo()
	Input Parameter: none
	Output: none
	Task: Display programmer�s info in a box of stars.
	*******************************************************************/
void display_myInfo()
{
	printf("*********************************\n");
	printf("* In_Lab05			*\n");
	printf("* By: Jack Mahedy		*\n");
	printf("* Email: jmahedy@purdue.edu	*\n");
	printf("*********************************\n");
}

/*******************************************************************
Function: display_menu()
Input Parameter: none
Output: none
Task: Display tempurature conversion options as a menu.
*******************************************************************/
void display_menu()
{
	printf("Tempurature Conversion Options\n");
	printf("==================================\n");
	printf("1. Fahrenheit to Celsius\n");
	printf("2. Celsius to Fahrenheit\n");
}

/*******************************************************************
Function: f_to_c()
Input Parameter: float
Output: float
Task: Convert temperature from Fahrenheit to Celsius.
*******************************************************************/
float f_to_c(float f)
{
	float c;
	c = (f - 32) * 5 / 9;
	return c;
}

/*******************************************************************
Function: c_to_f()
Input Parameter: float
Output: float
Task: Convert temperature from Fahrenheit to Celsius
*******************************************************************/
float c_to_f(float c)
{
	float f;
	f = (c * 9 / 5) + 32;
	return f;
}