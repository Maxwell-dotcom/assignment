/*
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
Date: 02/10/2024
*/

#include <stdio.h>
#include <math.h>
int main () {
	int BookID,DueDate,ReturnDate,DaysOverDue,FineRate,FineAmount;
	//prompt the user to enter BookID
	printf("Enter the BookID:");
	scanf("%d",&BookID);
	//Prompt the user to enter DueDate
	printf("Enter the DueDate:");
	scanf("%d",&DueDate);
	//prompt the user to enter ReturnDate
	printf("Enter the ReturnDate:");
	scanf("%d",&ReturnDate);
	//to calculate DaysOverDue
	DaysOverDue = ReturnDate - DueDate;
	printf("The DaysOverDue is:%d", DaysOverDue);
	if (DaysOverDue=7) {
		FineRate=20;
		FineAmount=(DaysOverDue*FineRate);
	}
	else if(DaysOverDue<=15){
		FineRate=50;
		FineAmount= FineRate*DaysOverDue;
		printf("The FineAmount is:%.2d", FineAmount);
	}
	else{
		FineRate=100;
		FineAmount = FineRate * DaysOverDue;
		printf("The FineAmount is:%.2d",FineAmount);
	}
	printf("The BookID is:%d\n", BookID);
	printf("The DueDate is:%d\n", DueDate);
	printf("The ReturnDate is:%d\n", ReturnDate);
	printf("The FineRate is:%d\n", FineRate);
	printf("The FineAmount is:%d\n", FineAmount);
	printf("The DaysOverDue is:%d\n", DaysOverDue);	
	return 0;
}