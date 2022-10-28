/*=====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab04
 Lab Session time: Online Student
 Program Description: This program asks for inputs and inds the average.
=======================================================================*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>

//Main function:
int main()

{
	//Declare Variables
	int num1, num2, num3, num4;
	float average;

	printf("=====================\n");
	printf("In_Lab04 Solution\n");
	printf("By: Jack Mahedy\n");
	printf("=====================\n\n");
	printf("Enter three whole numbers:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("Variable	Value\n");
	printf("====================\n");
	printf("num1		%d\n", num1);
	printf("num2		%d\n", num2);
	printf("num3		%d\n\n", num3);

	//output is num1 negative or positive
	if (num1 > 0) {
		printf("num1 is positive\n\n");
	}
	else {
		printf("num1 is negative\n\n");
	}


	//the average of num1, num2, and num3
	num4 = num1 + num2 + num3;
	average = num4 / 3.0;
	printf("The average of the three numbers = %.2f\n\n", average);


	//greatest num
	if (num1 > num2 && num1 > num3) {
		printf("num1 is the greatest");
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("num2 is the greatest");
	}
	else {
		printf("num3 is the greatest");
	}

	return 0;	//End the program
}	