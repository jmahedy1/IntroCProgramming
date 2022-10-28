/*===================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, InLab11
 Lab Session time: Online Student
 Program Description: Asks the user for numbers, then displays the 
 number, binary, and hexadecimal form.
===================================================================*/
//Header files
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curses.h>
#include <math.h>
#include <string.h>

//typedef struct
typedef struct
{
	int number;
	char binary[9];
} binary;

// function definition of the revstr()  
void revstr(char *str1)  
{  
    // declare variable  
    int i, len, temp;  
    len = strlen(str1); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  

//Main function:
int main() {

	//Variables
	binary numbers[30];
	int i;
	int num = 0;

	//Display my info
	printf("\t***************************************\n");
	printf("\t*\tIn_Lab11		      *\n");
	printf("\t*\tBy: Jack Mahedy		      *\n");
	printf("\t*\tjmahedy@purdue.edu 	      *\n");
	printf("\t***************************************\n");
	printf("\n");

	//Prompt the user
	for (i = 0; i < 30;) {
		char c[] = "00000000";
		char x;
		printf("\tEnter a number between 0 and 255 (-1 to end): ");
		scanf("%d", &num);

		if (num == -1) {
			break;
		}
		else if (num < 0 || num > 255) {
			printf("\tInvalid Input\n");
		}
		else {
			numbers[i].number = num;

			for (int j = 0; num > 0; j++) {
				c[j] = num % 2 + '0';
				num = num / 2;
			}

			revstr(c);

			strcpy(numbers[i].binary, c);
			i++;
		}
	}
	printf("\n\tNumber\t\tBinary\t\tHexadecimal\n\t=============================================\n");
	for (int j = 0; j < i; j++) {
		printf("\t%d\t\t%s\t\t%X\n", numbers[j].number, numbers[j].binary, numbers[j].number);
	}
	
	return 0;	//End the program
}