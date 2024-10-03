/*
//A program to determine when one qualifies for a loan
Author:Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
Date: 02/10/2024
*/
#include<stdio.h>
#include <math.h>
int main() {
	int age;
	float annual_income;
	//prompt the user to enter the age
	printf("Enter the age:");
	scanf("%d",&age);
	//prompt the user to enter the annual income
	printf("Enter the annual_income:");
	scanf("%f",&annual_income);
	if(age>=21&&annual_income>=21000){ 
	printf("Congratulations you qualify for a loan");
    }
    else {
	printf("Unfortunately,we are unable to offer you a loan at this time");	
	}  	
    
    
	return 0;
}