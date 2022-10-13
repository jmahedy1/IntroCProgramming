/*====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment-05
 Lab session: Online Student
 Intro Comments: This program displays odd numbers, even numbers, 
 adds odd numbers and adds the inverse.
 ====================================================================*/

 //Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Function prototypes
void display_myInfo();
void display_menu();
void display_odd(int, int);
void display_even(int, int);
int sum_odd(int, int);
float sum_inverse(int, int);

//Main function:
int main()
{
	//Variables
	int choice = 0;
	int n1, n2;

	//Call display_myinfo
	display_myInfo();

	//Prompt the user to input two number where n2 > n1
	do {
		printf("\tEnter two positive numbers where n1 < n2: ");
		scanf("\t%d %d", &n1, &n2);
		printf("\n\n");
	} while (n2 < n1);

	//Start a while loop
	while (choice != 5) {
		display_menu();

		printf("\tEnter your choice: ");
		scanf("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			printf("\tThe odd numbers from %d to %d are: ", n1, n2);
			display_odd(n1, n2);
			printf("\n\n\n");
			break;
		case 2:
			printf("\tThe even numbers from %d to %d are: ", n1, n2);
			display_even(n1, n2);
			printf("\n\n\n");
			break;
		case 3:
			printf("\tThe sum of the odd numbers from %d to %d are:", n1, n2);
			sum_odd(n1, n2);
			printf(" %d ", sum_odd(n1, n2));
			printf("\n\n\n");
			break;
		case 4:
			printf("\tThe sum of 1/%d and 1/%d is: ", n1, n2);
			sum_inverse(n1, n2);
			printf(" %.2f ", sum_inverse(n1, n2));
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
	printf("\t* Assignment05			*\n");
	printf("\t* By: Jack Mahedy		*\n");
	printf("\t* Email: jmahedy@purdue.edu	*\n");
	printf("\t*********************************\n\n");
}

/*******************************************************************
Function: display_menu()
Input Parameter: none
Output: none
Task: Display the menu of options to the screen. 
*******************************************************************/
void display_menu() {
	printf("\tRange Function Options\n");
	printf("\t===========================================\n");
	printf("\t1. Display all odd numbers from n1 to n2\n");
	printf("\t2. Display all even numbers from n1 to n2\n");
	printf("\t3. Add all odd numbers from n1 to n2\n");
	printf("\t4. Add the inverse from n1 to n2\n");
	printf("\t5. Quit\n\n");
}

/*****************************************************************************
Function: display_odd()
Input Parameter: int, int
Output: none
Task: Display all odd numbers between the two integers (inclusive). 
*****************************************************************************/
void display_odd(int n1, int n2) {
	for (int i = n1; i <= n2; i++) {
		if (i % 2 != 0) {
			printf("%d ", i);
		}
	}
}


/*****************************************************************************
Function: display_even()
Input Parameter: int, int
Output: none
Task: Display all even numbers between the two integers (inclusive). 
******************************************************************************/
void display_even(int n1, int n2) {
	for (int i = n1; i <= n2; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
}

/******************************************************************************
Function: sum_odd()
Input Parameter: int, int
Output: int
Task: Calculate the sum of all odd numbers between the two integers (inclusive).
******************************************************************************/
int sum_odd(int n1, int n2) {
	int sum = 0;
	for (int i = n1; i <= n2; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	return sum;
}

/******************************************************************************
Function: sum_inverse()
Input Parameter: int, int
Output: float
Task: Calculate the sum of the inverse of the two integers.
*******************************************************************************/
float sum_inverse(int n1, int n2) {
	float sum = 0;
	sum = (1.0 / n1) + (1.0 / n2);
	return sum;
}