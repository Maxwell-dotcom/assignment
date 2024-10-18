/*
Author: Maxwell Adoyo Otieno
Reg no: CT101/G/24606/24
*/
#include<stdio.h>
int main()
{
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	do{
		printf("The value of number=%d\n",number);
		number++;
	}
	while(number<20);
	
	
	return 0;
 }