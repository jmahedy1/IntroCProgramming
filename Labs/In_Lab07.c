/*=======================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab07
 Lab Session time: Online Student
 Program Description: This program will ask the user for a number then 
 display it in different shapes.
=========================================================================*/

//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Function prototypes
void display_myInfo();
void display_menu();
void display_reverse_range(int);
void right_triangle(int);
void inverted_right_triangle(int);
void empty_right_triangle(int);

//Main function
int main()
{
	//Variables
	int choice = 0;
	int x;

	//Call display_myInfo()
	display_myInfo();

	//Prompt user
	do {
		printf("\tEnter a numbers greater than 1: ");
		scanf("\t%d", &x);
		printf("\n\n");
	} while (x < 1);
	
	//While loop menu
	while (choice != 5) {
		display_menu();

		printf("\tEnter your choice: ");
		scanf("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			printf("\tThe numbers from %d to 1 are: ", x);
			display_reverse_range(x);
			printf("\n\n\n");
			break;
		case 2:
			right_triangle(x);
			printf("\n\n\n");
			break;
		case 3:
			inverted_right_triangle(x);
			printf("\n\n\n");
			break;
		case 4:
			empty_right_triangle(x);
			printf("\n\n\n");
			break;
		case 5:
			printf("\tGoodbye!");
			break;
		default:
			printf("\tInvalid selection!\n\n\n");
		}
	}
	_getch();	//To keep the output screen open
	return 0;	//End the program
}

/*******************************************************************
Function: display_myInfo()
Input Parameter: none
Output: none
Task: Display programmer’s info in a box of stars
*******************************************************************/
void display_myInfo() {
	printf("\t*********************************\n");
	printf("\t* In_Lab07			*\n");
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
	printf("\tTriangle Options\n");
	printf("\t===========================================\n");
	printf("\t1. Display all numbers in inverse order in a given range\n");
	printf("\t2. Display a right triangle filled with stars\n");
	printf("\t3. Display an inverted right triangle filled with stars\n");
	printf("\t4. Display the sides of a right triangle\n");
	printf("\t5. Quit\n\n");
}

/*****************************************************************************
Function: display_reverse_range()
Input Parameter: int
Output: none
Task: Display the numbers between the given number and 1 (inclusive) in
descending order
*****************************************************************************/
void display_reverse_range(int x) {
	for (int i = 1; i <= x; x--) {
		printf("%d ", x);
	}
}

/*****************************************************************************
Function: right_triangle()
Input Parameter: int
Output: none
Task: Display a right triangle with the length of the number given filled with 
stars
******************************************************************************/
void right_triangle(int x) {
	for (int i = 1; i <= x; ++i) {
		printf("\t");
		for (int y = 1; y <= i; ++y) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/******************************************************************************
Function: inverted_right_triangle()
Input Parameter: int
Output: none
Task: Display an upside-down right triangle with the length of the number given
filled with stars
******************************************************************************/
void inverted_right_triangle(int x) {
	for (int i = x; i >= 1; --i) {
		printf("\t");
		for (int y = 1; y <= i; ++y) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/******************************************************************************
Function: enplty_right_triangle()
Input Parameter: int
Output: none
Task: Display the edges of a right triangle with the length of the number given
made with stars
*******************************************************************************/
void empty_right_triangle(int x) {
	for (int i = 1; i <= x; i++) {
		printf("\t");
		for (int y = 1; y <= i; y++) {
			if (y == 1 || y == i || i == x) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}