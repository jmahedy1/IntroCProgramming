/*====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment-06
 Lab session: Online Student
 Intro Comments: This program asks the user for prices, displays them, 
 then calculates average and maximum price.
 ====================================================================*/
 //Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>
#define SIZE 50

//Main function:
int main()
{
	//Variables
	float data[SIZE];
	int entries = 0;
	int ctr;
	float avg, num, largest;
	float sum = 0;

	//My info
	printf("\t***************************************\n");
	printf("\t*\tAssignment06                  *\n");
	printf("\t*\tBy: Jack Mahedy               *\n");
	printf("\t*\tEmail: jmahedy@purdue.edu     *\n");
	printf("\t***************************************\n");
	printf("\n\n");

	//Prompt the user for prices and end when -1
	for (ctr = 0; ctr < SIZE; ctr++) {
		printf("\tEnter the price of an item <enter -1 to end>: ");
		scanf("%f", &num);
			if (num == -1)
				break;
		data[ctr] = num;

			entries++;
	}

	//For spacing
	printf("\n\n");

	//number of entries
	printf("\tnumber of prices entered: %d", entries);

	//For spacing
	printf("\n\n");

	//display partially filled array
	printf("\tPrices entered are:\n");
	printf("\t===================\n");
	for (ctr = 0; ctr < entries; ctr++) {
		printf("\t$%.2f\n", data[ctr]);
	}

	//For spacing
	printf("\n\n");

	//Average
	for (ctr = 0; ctr < entries; ctr++) {
		sum = sum + data[ctr];
	}
	avg = sum / entries;
	printf("\tThe average price is $%.2f", avg);
	
	//For spacing
	printf("\n\n");

	//Maximum price
	largest = data[0];

	for (ctr = 1; ctr < SIZE; ctr++)
	{
		if (largest < data[ctr])
			largest = data[ctr];
	}

	printf("\n\tThe maximum price is $%.2f", largest);

	return 0;	//End the program
}