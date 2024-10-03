/* A program to calculate compound interest
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
Date: 02/10/2024
*/

#include <stdio.h>
#include <math.h>
int main(){
	float principle,rate,time,N;
	//Prompt the user to enter the principle
	printf("Enter the principle:");
	scanf("%f",&principle);
	//prompt the user to enter the rate
	printf("Enter the rate:");
	scanf("%f",&rate);
	//prompt the user to enter time
	printf("Enter the time:");
	scanf("%f",&time);
	//prompt the user to enter N
	printf("The value of N is:");
	scanf("%f",&N);
	//to calculate the compound interest
	float compound_interest=principle*pow((1*(rate/(100*N))),N);
	printf("The total compound_interestis:%f",compound_interest);
	return 0;
}