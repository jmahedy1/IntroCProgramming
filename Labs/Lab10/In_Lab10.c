/*===================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab10
 Lab Session time: Online Student
 Program Description: Ask the user for temps, store data in array,
 display the temps, and switch the order
===================================================================*/
//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 30

//typedef struct
typedef struct {
	int low_temp;
	int high_temp;
} LowHighTemp;

//Main function:
int main() {

	//Variables
	LowHighTemp november[30];
	int i;

	//Display my info
	printf("\t***************************************\n");
	printf("\t*\tIn_Lab10		      *\n");
	printf("\t*\tBy: Jack Mahedy		      *\n");
	printf("\t*\tjmahedy@purdue.edu 	      *\n");
	printf("\t***************************************\n");
	printf("\n");

	//Prompt the user for low and high temps, end with 0 0
	for (i = 0; i < 30; i++) {
		int t1, t2;
		printf("\tEnter low and high temperatures (enter 0 0 to end data entry): ");
		scanf("%d %d", &t1, &t2);
		if (t1 == 0 && t2 == 0) {
			break;
		}
		november[i].low_temp = t1;
		november[i].high_temp = t2;
	}

	//number of entries
	printf("\n\tNumber of days entered: %d\n\n", i);

	//Display chart of temps
	printf("\tLow\tHigh\n\t=============\n");
	for (int j = 0; j < i; j++) {
		printf("\t%d\t%d\n", november[j].low_temp, november[j].high_temp);
	}
	
	//Swapped temps
	LowHighTemp temp = november[i - 1];
	november[i - 1] = november[0];
	november[0] = temp;
	printf("\n\tAfter swapping the first and last array element:\n");
	printf("\tLow\tHigh\n\t=============\n");
	for (int j = 0; j < i; j++) {
		printf("\t%d\t%d\n", november[j].low_temp, november[j].high_temp);
	}

	_getch();	//To keep the output screen open
	return 0;	//End the program
}