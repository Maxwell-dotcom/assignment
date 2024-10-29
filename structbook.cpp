/* A program to define and initialize struct statements
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
*/
 
 #include <stdio.h>
 #include <string.h>
 // declaration of the struct statement
 struct book{
 	char tittle[30];
 	char author[30];
 	int year_published;
 	char ISBN[13];
 	float price;
 }
 book1;
 int main(){
 //initialize the struct statement
 strcpy(book1.tittle,"introduction to computer languages");
 strcpy(book1.author,"Clara Mommanyi");
	 book1.year_published=2019;
	 strcpy(book1.ISBN,"23245244354256");
	 book1.price=99.99;
	 // print out the results
	 printf("the book tittle is:%s\n",book1.tittle);
	 printf("The author is:%s\n",book1.author);
	 printf("The year_published is:%d\n",book1.year_published);
	 printf("The ISBN is:%s\n",book1.ISBN);
	 printf("The price is:%.2f\n",book1.price);
	 	 return 0;
 }