#include<stdio.h>

void main()

{
	int month;
	do
	{
		printf("Please enter any month number (between 1-12) ");
		scanf("%d" ,& month);
	}
	while(month<1 || month>12);
		
	if(month==2)
	printf("NUmber of days is 28 (If not leap year)  &  Number of days is 29 (If leap year)" );
	
	else if (month==1 || month==3 || month==5 || month==7 || month==9 || month==11)
	printf ("Number of days is 30");
	
	else
	printf("Number of days is 31");
}
