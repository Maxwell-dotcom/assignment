#include <stdio.h>
int main()
{
int number;
printf("Enter the number:");
scanf("%d",&number);	
while(number<=50){
	printf("Value of number=%d\n",number);
	number++;
}


	return 0;
}