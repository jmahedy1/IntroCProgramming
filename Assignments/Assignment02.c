/*===================================================================================
 Programmer: Jack Mahedy
 Email: jmahedy@purdue.edu
 CNIT 105, Assignment-02
 Lab session: Online Student
 Intro Comments: This assignment is a road trip report. It asks the user to enter a X
 and Y coordinate for the starting point then for a end point, gallons used, and how
 many hours it took. It then gives you the distance driven, average speed, cost of gas,
 and mileage on this trip.
 ====================================================================================*/

#define _CRT_SECURE_NO_WARNINGS		
#include <stdio.h>   
#include <math.h>               
#define PRICE_PER_GALLON 2.257
int main()
{
    //Variables
    int left1, right1, left2, right2;
    float gallons, hours, distance, set1, set2, set3, speed, cost, mileage;

    //Prompt for user
    printf("*****************************************\n");
    printf("* Assignment 02                         *\n");
    printf("* By: Jack Mahedy                       *\n");
    printf("*****************************************\n");
    printf("Enter the X and Y coordinate for the start point:");
    scanf("%d %d", &left1, &right1);

    printf("Enter the X and Y coordinate for the destination point:");
    scanf("%d %d", &left2, &right2);

    printf("Enter gallons of gas used:");
    scanf("%f", &gallons);

    printf("How many hours did it take to drive?");
    scanf("%f", &hours);

    //Arithmatic
    set1 = pow((left1 - left2), 2.0);
    set2 = pow((right1 - right2), 2.0);
    set3 = set1 + set2;
    distance = sqrt(set3);
    speed = distance / hours;
    cost = gallons * PRICE_PER_GALLON;
    mileage = distance / gallons;

    //Print results
    printf("The Road Trip Report:\n");
    printf("=========================================\n");
    printf("The distance driven: %.2f miles.\n", distance);
    printf("Average speed: %.2f miles/hour\n", speed);
    printf("Cost of gas: $%.2f\n", cost);
    printf("Mileage on this trip: %.2f miles / gallon\n", mileage);

    _getch();
    return 0;
}
