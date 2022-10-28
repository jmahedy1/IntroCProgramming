/*=======================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab08
 Lab Session time: Online Student
 Program Description: This program will ask the user to enter 5 numbers
 then the program will generate 20 random numbers.
=========================================================================*/

//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>
#include<stdlib.h>
#define SIZE1 5
#define SIZE2 20

//Main function:
int main()
{
	//Variables
	int data[SIZE1];
	int scores[SIZE2];
	int sum = 0;
	float avg = 0;
	int decreased = 0;
	float sum1 = 0;
	float avg1 = 0;

	//My info
	printf("\t===================\n");
	printf("\tIn_Lab08\n");
	printf("\tBy: Jack Mahedy\n");
	printf("\t=================\n");
	printf("\n\n");

	//Prompt the user to enter whole number
	printf("\t<Part 1>\n");
	printf("\t=============\n");
	for ( int ctr = 0; ctr < SIZE1; ctr++) {
		printf("\tEnter a whole number: ");
		scanf("%d", &data[ctr]);
	}

	//For spacing
	printf("\n\n");

	//Array content
	printf("\tContent of array data:\n");
	printf("\t=========================\n");
	for (int ctr = 0; ctr < SIZE1; ctr++) {
		printf("\t%d ", data[ctr]);
	}

	//For spacing
	printf("\n\n");

	//Average
	for (int ctr = 0; ctr < SIZE1; ctr++) {
		sum += data[ctr];
	}
	avg = sum / 5.0;
	printf("\tAverage of the values stored in array data: = %.2f", avg);

	//For spacing
	printf("\n\n");
	
	//Decreased elements
	printf("\tDecreased elements are: \n");
	printf("\t==========================\n");
	for (int ctr = 0; ctr < SIZE1; ctr++) {
		decreased = data[ctr] - 1;
		printf("\t%d ", decreased);
	}

	//For spacing
	printf("\n\n");

	//Part 2
	printf("\t<Part 2>\n");
	printf("\t=============\n");
	printf("\tRandom generated scores are: \n");
	printf("\t============================\n");

	for (int ctr = 0; ctr < SIZE2; ctr++) {
		scores[ctr] = rand() % 101;
	}
	
	for (int ctr = 0; ctr < SIZE2; ctr++) {
		printf("\t%d\n ", scores[ctr]);
	}
	
	//For spacing
	printf("\n\n");

	//Part 2 Average
	for (int ctr = 0; ctr < SIZE2; ctr++) {
		sum1 += scores[ctr];
	}
	avg1 = sum1 / 20.0;
	printf("\tAverage of 20 random scores = %.2f", avg1);

	return 0;	//End the program
}