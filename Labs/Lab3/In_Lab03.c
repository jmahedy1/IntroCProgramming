/*=======================================================
  Programmer: Jack Mahedy
  Email: jmahedy@purdue.edu
  CNIT 105, InLab03
  Lab Session Time: Online Student
  Program Description: The user will enter sides and height
  of a prism with triangle bases. The code will then output 
  the area of the triangle and the volume of the prism.
==========================================================*/

//Pre-processor Directives:
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>		
#include<curses.h>
#include<math.h>		

// main function:
int main()
{
	int top, left, right, height;											//variable of triangle
	float area, volume, num, num2, num3, s1, s2, s3;						//variables for equation

	printf("In_Lab03 Output\n");											//Output promt
	printf("Name: Jack Mahedy\n");
	printf("====================\n");
	printf("Enter sides of the triangle:");									//User input
	scanf("%d %d %d", &top, &left, &right);
	printf("Enter the height of the triangle:");
	scanf("%d", &height);

	num = (top + left + right) / 2.;										//Equation for num ("S")
	s1 = num - top;															//Part of area equation
	s2 = num - left;														//part of area equation
	s3 = num - right;														//part of area equation
	num2 = s1 * s2 * s3;													//part of area equation
	num3 = sqrt(num*num2);
	area = num3;															//Area equation
	volume = area * height;													//Volume equation
	
	printf("The area of the triangle is: %.2f\n", area);					//equation output
	printf("The volume of the prism is: %.2f\n", volume);

	return 0;		//End the program
}