/* A program to declare and initialize the struct statement by prompting the user
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
*/
#include <stdio.h>
#include <string.h>
// Declaring the user
struct book{
	char tittle[30];
	char author[30];
	int year_published;
	char ISBN[14];
	float price;
	
}
book1;
int main( ) {
// prompt the user to enter the book tittle
printf("Enter the book tittle:");
scanf("%s",&book1.tittle);

//prompt the user to enter the book author
printf("Enter the book author:");
scanf("%s",&book1.author);

//prompt the user to enter the book publication year
printf("Enter the year_published :");
scanf("%d",&book1.year_published);

//prompt the user to enter book ISBN
printf("Enter the book ISBN:");
scanf("%s",&book1.ISBN);

//prompt the user to enter the book price
printf("Enter the book price:");
scanf("%f",&book1.price);

//print the output
printf("The book tittle is: %s\n",book1.tittle);
printf("The book author is: %s\n",book1.author);
printf("The book year_published is: %d\n",book1.year_published);
printf("The book ISBN is: %s\n,",book1.ISBN);
printf("The book price is: %f\n",book1.price);
	
	
	
	return 0;
}

	