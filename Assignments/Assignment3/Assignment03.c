/*====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment-03
 Lab session: Online Student
 Intro Comments: The program finds the roots of the quadratic equation.
 ====================================================================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <curses.h>

int main()
{
	//Variables
	float disc, disc1, disc2, root1, root2, a, b, c;

	//intro
	printf("*********************************\n");
	printf("* Jack Mahedy			*\n");
	printf("* jmahedy@purdue.edu		*\n");
	printf("* CNIT 105, Assignment03	*\n");
	printf("* Lab Section: Online Student	*\n");
	printf("*********************************\n");
	
	//prompt for the user
	printf("Enter 3 coefficients a, b, c:");
	scanf("%f %f %f", &a, &b, &c);
	printf("Quadratic Equation is: %.1f X^2 + %.1f X + %.1f = 0\n\n", a, b, c);
	
	//Discriminant arithmatic
	disc1 = pow(b, 2);
	disc2 = 4 * a * c;
	disc = disc1 - disc2;

	//Discriminant
	printf("The Discriminant is: %.2f\n\n", disc);
	
	//Quadratic equation arithmatic
	root1 = (-b + sqrt(disc)) / (2 * a);
	root2 = (-b - sqrt(disc)) / (2 * a);
	
	//If statement for quadratic equation roots
	if (disc > 0) {
		printf("This equation has two real roots:\n");
		printf("=====================================\n");
		printf("Root1 = %.2f\n", root1);
		printf("Root2 = %.2f\n", root2);
	}
	else if (disc == 0) {
		printf("This equation has only one root = %.2f\n", root2);
	}
	else {
		printf("This equation has no real roots\n");
	}
	
	//If statement for smallest coefficient
	if (a < b && a < c) {
		printf("The smallest coefficient is: %.2f\n", a);
	}
	else if (b < a && b < c) {
		printf("The smallest coefficient is: %.2f\n", b);
	}
	else {
		printf("The smallest coefficient is: %.2f\n", c);
	}
	
	return 0;
}