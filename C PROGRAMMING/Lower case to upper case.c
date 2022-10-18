#include<stdio.h>

int main()
{
	char lower , upper;
	
	printf("Type a lower case character : ");
	scanf("%c", &lower);
	
	if ( lower>='a' && lower<= 'z')
	{
		upper = ( ' A ' + lower - 'a');
		
	}
	else 
		upper = lower ;
		
	printf("the uppercase character is %c/n" , upper);
	
	return 0;
}
