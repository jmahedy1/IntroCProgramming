/*==============================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment07
 Lab Session time: Online Student
 Program Description: This program will ask the user for prices, then 
 display number of prices, price in euro, average price, and prices less than 50.
===============================================================================*/
//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 20
#define RATE 1.1665

//Function prototypes
void display_myInfo();
float usd_to_euro(float);


//Main function:
int main()
{
	//Variables
	float USD[SIZE];
	float EURO[SIZE];
	float price;
	float sum = 0;
	float avg = 0;
	int ctr = 0;
	int entries = 0;

	//Display my info
	display_myInfo();

	//Prompt the user for prices in USD and end when -1
	for (ctr = 0; ctr < SIZE; ctr++) {
		printf("\tEnter a price in USD. (Use -1 to stop data entry): ");
		scanf("%f", &price);
		if (price == -1)
			break;
		USD[ctr] = price;

		EURO[ctr] = usd_to_euro(price);

		entries++;
	}
	printf("\n");

	//number of entries
	printf("\tNumber of prices entered: %d", entries);
	printf("\n\n");

	//Display chart of prices in USD and EURO
	printf("\tUS Dollar ($)\t\tEuro\n\t==========================================\n");
	for (int i = 0; i < entries; i++) {
		printf("\t%.2f\t\t\t%.2f\n", USD[i], EURO[i]);
	}
	printf("\n\n");

	//Average price in USD
	for (ctr = 0; ctr < entries; ctr++) {
		sum = sum + USD[ctr];
	}
	avg = sum / entries;
	printf("\tAverage price in USD: %.2f", avg);
	printf("\n\n");

	//Average price in Euro
	sum = 0;
	for (ctr = 0; ctr < entries; ctr++) {
		sum = sum + EURO[ctr];
	}
	avg = sum / entries;
	printf("\tAverage price in Euro: %.2f", avg);
	printf("\n\n");

	//Display prices less than 50
	printf("\tPrices < $50 are:\n\t=========================\n");
	for (int i = 0; i < entries; i++) {
		if (USD[i] < 50) {
			printf("\t$%.2f\t\t%.2f\n", USD[i], EURO[i]);
		}
	}
	printf("\n\n");

	_getch();	//To keep the output screen open
	return 0;	//End the program
}

/********************************************************************
 Function: display_myInfo()
 Input Paramaters: none
 Output data type: void
 Task: Display programmer’s info in a box of stars
 *******************************************************************/
void display_myInfo() {
	printf("\t***************************************\n");
	printf("\t*\tJack Mahedy		      *\n");
	printf("\t*\tjmahedy@purdue.edu            *\n");
	printf("\t*\tCNIT105 Assugnment07	      *\n");
	printf("\t***************************************\n");
	printf("\n");
}

/********************************************************************
 Function: display_myInfo()
 Input Paramaters: price in dollars
 Output data type: price in euros
 Task: Convert the dollar amount to euros using the exchange rate 
 declared as the named constant. Returns the euro amount as output.
 *******************************************************************/
float usd_to_euro(float price) {
	float euro;
	float EURO[SIZE];
	euro = price / RATE;
	return euro;
}