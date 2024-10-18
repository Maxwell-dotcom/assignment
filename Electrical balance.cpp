#include <stdio.h>
#include <string.h>
int main()
{
	int customer_ID;
	char customer_Name[10];
	float units;
	float charges;
	float bills;
	float surcharge_fee;
	float surcharge;
	float total_Amount;
	
	printf("Enter the customer_ID:");
	scanf("%d",&customer_ID);
	printf("Enter the units:");
	scanf("%f",&units);
	printf("Enter the customer_Name:");
	scanf("%s",&customer_Name);
	
	if(units<200){
		charges=1.20;
		bills=charges*units;
		printf("\nthe bills is :%.2f",bills);
		
	}
	else if(units<400){
		charges=1.50;
		bills=charges*units;
		printf("\nthe bills is:%.2f",bills);
		
	}
	else if(units<600){
		charges=1.80;
		bills=charges*units;
		printf("\nthe bills is :%.2f",bills);
		
	}
	else{
		charges=2.00;
		bills=charges*units;
		printf("\nthe bills is:%.2f",bills);
	}
	
	float minimum_bill=100;
	if(bills<100){
		printf("\nthe minimum_bill is:%.2f",minimum_bill);
	}
	surcharge=15;
	if(bills>400){
		surcharge_fee=bills*surcharge/100;
		printf("\nthe surcharge_fee is:%.2f",surcharge_fee);
	}
	total_Amount=bills+surcharge_fee;
	printf("\nthe total_Amount is:%.2f",total_Amount);
	
	
	
	printf("\n the customer_ID is :%d",customer_ID);
	printf("\n the customer_Name is :%.2f",customer_Name);
	printf("\n the number of units is :%.2f",units);
	printf("\n the charges is :%.2f",charges);
	printf("\n the total_Amount is :%.2f",total_Amount);
	
	
	
	return 0
  }