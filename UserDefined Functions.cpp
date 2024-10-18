/*
A program to calculate electric bill using user defined function
Author: Maxwell Adoyo Otieno
Reg no: CT101/G/24606/24
*/

#include <stdio.h>
void getinput(int*id,char name[],float*units);
float calculatecharges(float units);
float calculatesurcharge(float bills);
float calculatetotals(float bills,float surcharge);
int main(){
int customer_ID;
char customer_Name[10];
float units;
float charges_Per_Unit;
float bills;
float surcharge;
float totals;	
getinput(&customer_ID,customer_Name,&units);
charges_Per_Unit=calculatecharges(units);
bills=charges_Per_Unit*units;
surcharge=calculatesurcharge(bills);
if(bills<100){
	bills=100;
}
totals =calculatetotals(bills,surcharge);

printf("The customer_ID is :%d/n", customer_ID);
printf("The customer_Name is :%.2f\n", customer_Name);
printf("The units is :%.2f\n",units);
printf("The charges_Per_Unit are :%.2f\n",charges_Per_Unit);
printf("The totals are :%.2f\n",totals);
printf("The surcharge is :%.2f\n",surcharge);
	
	return 0;
}
void getinput(int*customer_ID,char customer_Nmae[],float *units){
	printf("Enter the customer_ID:");
	scanf("%d",customer_ID);
	printf("Enter the customer_Name:");
	scanf("%s",customer_Name);
	printf("Enter the units:");
	scanf("%f",units);
}


float calculatecharges(float units){
	if(units<=199){
		return 1.20;
	}
	else if(units<400){
		return 1.50;
	}
	else if(units<600){
		return 1.80
	}
	else{
		return 2.00;
	}
}
float calculatesurcharge(float bills){
	if(bills>400){
		return bills*0.15;
	}
	return 0;
}
float calculatetotals(float bills,float surcharge){
	return bills+surcharge;
	
	
	
	
}