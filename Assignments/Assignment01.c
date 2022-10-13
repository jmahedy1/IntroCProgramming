/*=========================================================
Programmer: Jack Mahedy
Email : jmahedy@purdue.edu
CNIT 105, Assignment 01

Program Description : This project displays my name, email,
and assignment. Under this information is "CIT" made up of
many letters.
=========================================================*/
define _CRT_SECURE_NO_WARNINGS							// to ignore different warnings.
include <stdio.h>
include <conio.h>
int main()
{
	printf("*************************\n");
	printf("* Jack Mahedy		*\n");
	printf("* jmahedy@purdue.edu	*\n");
	printf("* CNIT105 Assignment-01	*\n");
	printf("*************************\n\n\n\n\n\n");
	printf("   cccc		IIIII		 ===============\n");
	printf("  ccc		  I			T\n");
	printf(" ccc		  I			T\n");
	printf(" ccc		  I			T\n");
	printf(" ccc		  I			T\n");
	printf("  ccc		  I			T\n");
	printf("   ccc		  I			T\n");
	printf("     cccc	IIIII			T\n");

	_getch();											// to keep the output screen open
	return 0;
}