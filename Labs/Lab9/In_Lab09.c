/*===================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab09
 Lab Session time: Online Student
 Program Description: The program will display ID, GPA, and number of 
 courses for certin students.
===================================================================*/
//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>
#define SIZE 5

//Main function:
int main()
{
	//Variables
	int id[SIZE] = { 1000, 1001, 1002, 1003, 1004 };
	float gpa[SIZE] = { 3.2, 3.5, 3.0, 2.8, 1.77 };
	int courses[SIZE] = {5, 4, 2, 3, 1};

	//My info
	printf("\t***************************************\n");
	printf("\t*\tIn_Lab09		      *\n");
	printf("\t*\tBy: Jack Mahedy               *\n");
	printf("\t*\tEmail: jmahedy@purdue.edu     *\n");
	printf("\t***************************************\n");
	printf("\n");

	//Display chart of students: ID's, GPPA's, and Number of courses
	printf("\tID\tGPA\tNumber of Courses\n\t===================================\n");
	for (int i = 0; i < SIZE; i++) {
		printf("\t%d\t%.2f\t\t%d\n", id[i], gpa[i], courses[i]);
	}
	printf("\n");

	//Display Students taking fours corses
	printf("\tStudents taking four courses:\n");
	for (int i = 0; i < SIZE; i++) {
		if (courses[i] == 4) {
			printf("\tID: %d\tGPA: %.2f\tNumber of Courses: %d\n", id[i], gpa[i], courses[i]);
		}
	}
	printf("\n");

	//Display Students with GPA greater than 2.5
	printf("\tStudents with GPA greater than 2.5:\n");
	for (int i = 0; i < SIZE; i++) {
		if (gpa[i] >= 2.5) {
			printf("\tID: %d\tGPA: %.2f\tNumber of Courses: %d\n", id[i], gpa[i], courses[i]);
		}
	}
	printf("\n");

	//Display student with ID 1002
	printf("\tStudents with ID 1002:\n");
	for (int i = 0; i < SIZE; i++) {
		if (id[i] == 1002) {
			printf("\tID: %d\tGPA: %.2f\tNumber of Courses: %d\n", id[i], gpa[i], courses[i]);
		}
	}

	return 0;	//End the program
}