#include<stdio.h>
#include<stdbool.h>



bool isLeapYear(int);




int main(void)
{
	int year;
	
	printf("Determine if a year is a leap year or not. \n\n");
	printf("Enter year: ");
	scanf("%d" , &year );
	
	// Printing  the result.
	if (isleapYear(year))
		printf("%d year is a leap year\n" , year );
	else
		printf("%d year is not a leap year\n" , year);
		
	return 0;		
}

bool isLeapYear( int year )
{
	if ( ( year % 4 ) = 0 ) 
		printf("return true");
		
	else	
		printf("return false");
	
	return 0;	
}
