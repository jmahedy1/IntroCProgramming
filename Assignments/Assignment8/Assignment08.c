/*===============================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment08
 Lab Session time: Online Student
 Program Description: This program asks the user for a device code, then displays 
 the entries, price, average price, device under $10, and swapped contents.
================================================================================*/
//Header files
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>
#include<string.h>

//typedef struct
typedef struct
{
	char device_code[10];
	float device_price;
} device_record;

//Main function:
int main() {

	//Variables
	device_record code[20];
	int i;
	float price;
	char num[4];
	int entries = 0;
	char search[4];
	float price1 = 0;
	float avg;
	float sum = 0;
	int flag = 0;

	//Display my info
	printf("\t***************************************\n");
	printf("\t*\tJack Mahedy		      *\n");
	printf("\t*\tjmahedy@purdue.edu	      *\n");
	printf("\t*\tCNIT105 Assignment08          *\n");
	printf("\t***************************************\n\n");

	//Prompt the user for the code and the price of the next device
	for (i = 0; i < 20; i++) {
		printf("\tEnter the code for the next device: ");
		scanf("%s", num);

		if (strcmp(num, "XXX") == 0) {
			break;
		}
		strcpy(code[i].device_code, num);
		printf("\tEnter the unit price: ");
		scanf("%f", &code[i].device_price);
		
		entries++;
	}

	//number of entries
	printf("\n\tNumber of prices entered: %d", entries);
	printf("\n");

	//Chart of code and price
	printf("\n\tCode\t\tUnit Price\n\t==========================\n");
	for (int j = 0; j < i; j++) {
		printf("\t%s\t\t$%.2f\n", code[j].device_code, code[j].device_price);
	}

	//Average unit price
	for (int ctr = 0; ctr < entries; ctr++) {
		sum = sum + code[ctr].device_price;
	}
	avg = sum / entries;
	printf("\n\tAverage unit price: $%.2f", avg);
	printf("\n\n");

	//Display prices under 10
	printf("\tDevices under $10.00\n\t======================\n");
	for (int i = 0; i < entries; i++) {
		if (code[i].device_price < 10) {
			printf("\t%s\t\t$%.2f\n", code[i].device_code, code[i].device_price);
		}
	}
	printf("\n");

	//User enters device code
	printf("\tEnter a device code to search for: ");
	scanf("%s", search);

	for (i = 0; i < entries; i++) {

		if (strcmp(search, code[i].device_code) == 0) {
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("\n\tThere is no such device.");
	}
	else {
		printf("Device found.");
	}

	//Display array swapped
	device_record record = code[entries - 1];
	code[entries - 1] = code[0];
	code[0] = record;
	printf("\n\n\tArray content after the swap: \n");
	printf("\t=============================\n");
	for (int j = 0; j < entries; j++) {
		printf("\t%s\t$%.2f\n", code[j].device_code, code[j].device_price);
	}

	return 0;	//End the program
}