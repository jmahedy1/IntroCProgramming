/*=====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment09
 Lab Session time: Online Student
 Program Description: Programm will read lines from a text file, display
 contents, update contents, then display updated contents
======================================================================*/

//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#define SIZE 20

//typedef struct
typedef struct
{
	char first[10];
	char last[10];
	float gpa;
} Record;

//Function Prototypes
void display_myInfo();
void display_array(Record[], int);
float compute_avg(Record[], int);

//Main function:
int main() {

	//Variables
	Record temp;
	int count;
	Record records[SIZE];
	char first, last;

	//Display my info
	display_myInfo();

	//Pull data from text and put in array
	FILE* fptr;
	fptr = fopen("students.txt", "r");

	if (fptr == NULL) {
		printf("\tFile could not be opened!");
		_getch();
		return 1;
	}
	count = 0;

	while (feof(fptr) == 0) {
		fscanf(fptr, "%s %s %f", records[count].first, records[count].last, &records[count].gpa);
		count++;
	}

	//Display entries
	printf("\t%d lines were read from the file.", count);

	//Display array before
	display_array(records, count);

	fclose(fptr);

	//Display average
	printf("\n\tAverage GPA = %.2f", compute_avg(records, count));

	printf("\n");

	strcpy(records[0].first, "Jack");
	strcpy(records[0].last, "Mahedy");

	//Creating new file
	fptr = fopen("newstudents.txt", "w");

	if (fptr == NULL) {
		printf("\tFile could not be opened for saving!");
		_getch();
		return 1;
	}

	//Printing new file
	for (int k = 0; k < count; k++) {
		fprintf(fptr, "%s %s %.2f\n", records[k].first, records[k].last, records[k].gpa);
	}
	fclose(fptr);

	display_array(records, count);

	printf("\n\tUpdated array was saved to the file");

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
	printf("\t***************************************\n");
	printf("\t*\tJack Mahedy	              *\n");
	printf("\t*\tjmahedy@purdue.edu            *\n");
	printf("\t*\tCNIT105 Assignment09	      *\n");
	printf("\t***************************************\n\n");
}

/*************************************************************************
Function: display_array()
Input Parameter:Array of struct and number of students stored in the array
Output: none
Task: Display all the students stored in the array in a tabular format
to the screen along with column headers
*************************************************************************/
void display_array(Record rec[], int num) {
	printf("\n\n\tFirst\tLast\t\tGPA\n");
	printf("\t================================\n");
	for (int k = 0; k < num; k++) {
		printf("\t%s\t%s\t\t%.2f\n", rec[k].first, rec[k].last, rec[k].gpa);
	}
}

/***************************************************************************
Function: compute_avg
Input Parameter: array of struct and number of students stored in the array
Output: float
Task: compute the average GPA of all the students stored in the array
and return it as output
***************************************************************************/
float compute_avg(Record rec[], int num) {
	
	float sum = 0;

	for (int i = 0; i < num; i++) {
		sum = rec[i].gpa + sum;
	}
	return sum / num;
}