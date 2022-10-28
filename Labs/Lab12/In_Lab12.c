/*=====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab12
 Lab Session time: Online Student
 Program Description: Program will stores names and numbers in an array 
 from a text document then print them out then adjust then print again
======================================================================*/

//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>
#include<string.h>
#define SIZE 40

//typedef struct
typedef struct
{
	char name[10];
	float score;
} StudentRecord;

//Function Prototypes
void display_myInfo();
void display_array(StudentRecord[], int);

//Main function:
int main() {

	//Variables
	StudentRecord temp;
	int count;
	StudentRecord records[SIZE];
	int increased = 0;

	//Display my info
	display_myInfo();

	//Pull data from text and put in array
	FILE* fptr;
	fptr = fopen("score_list.txt", "r");

	if (fptr == NULL) {
		printf("\tFile could not be opened!");
		return 1;
	}
	count = 0;

	while (feof(fptr) == 0) {
		fscanf(fptr, "%s %f", temp.name, &temp.score);
		records[count] = temp;
		count++;
	}
	
	//Display entried
	printf("\t%d entries read into the array. \n\n", count);

	//Display array before
	display_array(records, count);

	fclose(fptr);

	printf("\n\n\tFile was closed successfully.\n\n");

	//Creating new file
	fptr = fopen("newscore_list.txt","w");

	if (fptr == NULL) {
		printf("\tFile could not be opened for saving!");
		return 1;
	}

	//Printing new file
	for (int k = 0; k < count; k++) {
		fprintf(fptr, "%s\t%.2f\n", records[k].name, records[k].score + 1);
	}
	fclose(fptr);

	printf("\tUpdated scores are:\n");
	printf("\tName\t\tScore\n");
	printf("\t========================\n");
	for (int k = 0; k < count; k++) {
		printf("\t%s\t\t%.2f\n", records[k].name, records[k].score + 1);
	}

	printf("\n\tData was saved to the new file successfully");

	return 0;	//End the program
}

/*******************************************************************
Function: display_myInfo()
Input Parameter: none
Output: none
Task: Display programmer�s info in a box of stars
*******************************************************************/
void display_myInfo() {
	printf("\t***************************************\n");
	printf("\t*\tIn_Lab12		      *\n");
	printf("\t*\tBy: Jack Mahedy	              *\n");
	printf("\t*\tEmail: jmahedy@purdue.edu     *\n");
	printf("\t***************************************\n\n");
}

/*******************************************************************
Function: display_array()
Input Parameter: 
Output: none
Task: Display student�s data stored in the array in a tabular format
with column headers to the screen (name and score)
*******************************************************************/
void display_array(StudentRecord rec[], int num) {
	printf("\tName\t\tScore\n");
	printf("\t==========================\n");
	for (int k = 0; k < num; k++) {
		printf("\t%s\t\t%.2f\n", rec[k].name, rec[k].score);
	}
}