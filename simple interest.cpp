/*
//program to calculate simple interest
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
Date: 02/10/2024
*/
#include <stdio.h>
#include <math.h>
int main() {

	float principle,time,rate,interest;
	//prompt the user to enter principle
	printf("Enter the principle:");
	scanf("%f",&principle);
	//prompt the user to enter time
	printf("Enter the time:");
	scanf("%f",&time);
	//prompt the user to enter rate
	printf("Enter the rate:");
	scanf("%f",&rate);
	// to calculate simple interest
	interest = principle * rate/100*time;
	printf("The principle is: &f",interest);
	
	return 0;
}