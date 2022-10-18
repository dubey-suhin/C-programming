// Octal to Binary
#include<stdio.h>
#include <math.h>
int main()
{
	int num,dec = 0, rem = 0,place =0 ;
	long bin = 0;
	
	printf ("Enter an octal number \n ");
	scanf("%d" , & num);
	
	printf("Binary equivalent of octal number %d is ", num);
	while(num)
	{
		rem = num %10;
		dec = dec + rem * pow (8 , place);
		num= num / 10;
		place++;
	}
	place = 1;
	rem = 0;
	while (dec)
	{
		rem = dec % 2;
		bin = bin+(rem * place);
		dec = dec / 2;
		place = place * 10;
	}
	printf ("%ld\n", bin);
	
	return 0;
}
