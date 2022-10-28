/*====================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment-04
 Lab session: Online Student
 Intro Comments: This program calculates volume of a sphere, surface
 area of a cylinder, and area of a triangle.
 ====================================================================*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curses.h>
#include<math.h>
#define PI 3.1415

 //Function prototypes
void display_myInfo();
void display_menu();
float sphere_volume(float);
float cylinder_surface(float, float);
int verify_triangle(float, float, float);
float area_triangle(float, float, float);

//Main function:
int main()
{
	//Declare Variables
	int choice = 0;
	float radius, volume, height, surface, s1, s2, s3, area;
	int yes;

	//Call display_myinfo and display_menu
	display_myInfo();
	display_menu();

	//Prompt user for selection
	printf("Enter your choice: ");
	scanf("%d", &choice);
	printf("\n\n");

	//Switch statement
	switch (choice)
	{
	case 1:
		printf("Enter the radius of the sphere ");
		scanf("%f", &radius);
		volume = sphere_volume(radius);
		printf("The volume of the sphere is %.2f", volume);
		break;
	case 2:
		printf("Enter the radius and height of the cylinder: ");
		scanf("%f %f", &radius, &height);
		surface = cylinder_surface(radius, height);
		printf("The surface area of the cylinder is %.2f", surface);
		break;
	case 3:
		printf("Enter the three sides of a triangle ");
		scanf("%f %f %f", &s1, &s2, &s3);
		yes = verify_triangle(s1, s2, s3);
		if (yes == 1) {
			area = area_triangle(s1, s2, s3);
			printf("The area of the triangle = %.2f", area);
		}
		else {
			printf("These numbers do not form a triangle");
		}
		break;
	default:
		printf("Invalid input.");
	}

	return 0;	//End the program
}

/*******************************************************************
	Function: display_myInfo()
	Input Parameter: none
	Output: none
	Task: Display programmer�s info in a box of stars.
	*******************************************************************/
void display_myInfo()
{
	printf("*********************************\n");
	printf("* Jack Mahedy			*\n");
	printf("* jmahedy@purdue.edu		*\n");
	printf("* CNIT105 Assignment04 		*\n");
	printf("*********************************\n");
}

/*******************************************************************
Function: display_menu()
Input Parameter: none
Output: none
Task: Display area/volume options as a menu.
*******************************************************************/
void display_menu()
{
	printf("Area and Volume Calculation Options\n");
	printf("=====================================\n");
	printf("1. Volume of a sphere\n");
	printf("2. Surface area of a cylinder\n");
	printf("3. Area of a triangle\n");
}

/*******************************************************************
Function: sphere_volume()
Input Parameter: float
Output: float
Task: Compute the volume of the sphere and return it as an output. 
*******************************************************************/
float sphere_volume(float radius)
{
	float vol;
	vol = ((4.0 / 3.0) * PI) * (radius * radius * radius);
	return vol;
}

/*********************************************************************
Function: cylinder_surface()
Input Parameter: float
Output: float
Task:  Compute the surface area of a cylinder and return it as output.  
**********************************************************************/
float cylinder_surface(float radius, float height)
{
	float area, side, base;
	side = 2.0 * PI * radius * height;
	base = PI * (radius * radius);
	area = side + (2.0 * base);
	return area;
}

/*********************************************************************
Function: verify_triangle()
Input Parameter: float
Output: int (1 or 0)
Task: Verify if the three input numbers form a triangle.
**********************************************************************/
int verify_triangle(float n1, float n2, float n3)
{
	
	if ((n1 + n2 > n3) && (n1 + n3 > n2) && (n2 + n3 > n1)) {
		return 1;
	}
	else {
		return 0;
	}
}

/*********************************************************************
Function: area_triangle()
Input Parameter: float
Output: float
Task:  compute area of the triangle
**********************************************************************/
float area_triangle(float a, float b, float c)
{
	float area, s;
	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}