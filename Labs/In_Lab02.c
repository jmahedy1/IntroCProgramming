/*=======================================================
 Programmer: Jack Mahedy
 CNIT 105, InLab02
 Online Student: No Lab
 ==========================================================*/

//Pre-processor Directives:
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

 // main function:
	int main()
{
		int students;
		float price;
		int low;
		int high;

		printf("In_Lab02 Output\n");
		printf("Name: Jack Mahedy\n");
		printf("====================\n");

		printf("Enter number of students in CNIT105:  ");
		scanf("%d", &students);
		printf("Number of students in CNIT105 is = %d\n", students);

		printf("Enter the price of the textbook: ");
		scanf("%f", &price);
		printf("Price of the textbook = $%.2f\n", price);

		printf("Enter today's low and high temperatures in Fahrenheit: ");
		scanf("%d %d", &low, &high);
		printf("Today's low tempurature is %d\n", low);
		printf("Today's high tempurature is %d\n", high);

	_getch();										//To keep the output screen open
	return 0;										//End the program
}
