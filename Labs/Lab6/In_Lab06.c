/*=======================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab06
 Lab Session time: Online Student
 Program Description: This program will ask the user to enter a range
 then the program will give options to display, add, or multiply the range.
=========================================================================*/

//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>

//Function prototypes
void display_myInfo();
void display_menu();
void display_range(int);
int sum_range(int);
int multiply_range(int);

//Main function:
int main()
{
	//Variables
	int choice = 0;
	int x = 0;
	int sum, product;

	//Call display_myinfo
	display_myInfo();

	//Prompt the user to input one number where x > 1
	do {
		printf("\tEnter a number greater than 1: ");
		scanf("\t%d", &x);
		printf("\n\n");
	} while (x < 1);

	//Start a while loop
	while (choice != 4) {
		display_menu();

		printf("\tEnter your choice: ");
		scanf("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			printf("\tThe number from 1 to %d are: ", x);
			display_range(x);
			printf("\n\n\n");
			break;
		case 2:
			sum = sum_range(x);
			printf("\tThe sum of the numbers from 1 to %d is: %d", x, sum);
			printf("\n\n\n");
			break;
		case 3:
			product = multiply_range(x);
			printf("\tThe product of the numbers from 1 to %d is: %d", x, product);
			printf("\n\n\n");
			break;
		case 4:
			printf("\tGoodbye!");
			break;
		default:
			printf("\tInvalid selection!\n\n\n");
		}
	}

	return 0;	//End the program
}

/*******************************************************************
	Function: display_myInfo()
	Input Parameter: none
	Output: none
	Task: Display programmer�s info in a box of stars
	*******************************************************************/
void display_myInfo() {
	printf("\t*********************************\n");
	printf("\t* In_Lab06			*\n");
	printf("\t* By: Jack Mahedy		*\n");
	printf("\t* Email: jmahedy@purdue.edu	*\n");
	printf("\t*********************************\n\n");
}

/*******************************************************************
Function: display_menu()
Input Parameter: none
Output: none
Task: Display function options as a menu.
*******************************************************************/
void display_menu() {
	printf("\tRange Calculation Options\n");
	printf("\t=====================================\n");
	printf("\t1. Display all numbers in a given range\n");
	printf("\t2. Add all numbers in a given range\n");
	printf("\t3. Multiply all numbers in a given range\n");
	printf("\t4. Quit\n\n");
}

/*******************************************************************
Function: display_range()
Input Parameter: int
Output: none
Task:  Display the numbers between 1 and the given number (inclusive)
*******************************************************************/
void display_range(int x) {
	for (int i = 1; i <= x; i++) {
		printf("%d ", i);
	}
}

/*******************************************************************
Function: sum_range()
Input Parameter: int
Output: int
Task: Add the numbers between 1 and the given number(inclusive)
*******************************************************************/
int sum_range(int x) {
	int num = 1;
	int sum = 0;

	while (num <= x) {
		sum = sum + num;
		num++;
	}
	return sum;
}

/*******************************************************************
Function: multiply_range()
Input Parameter: int
Output: int
Task: Multiply the numbers between 1 and the given number (inclusive)
*******************************************************************/
int multiply_range(int x) {
	int num = 1;
	int product = 1;

	while (num <= x) {
		product = product * num;
		num++;
	}
	return product;
}