#include<stdio.h>
void fibonacci(int t, int t1, int t2);


int main()
{
	
	int t,t1=0 ,t2=1;
	printf ("Enter the number terms : ");
	scanf("%d", &t);
	
	
	
	fibonacci(t,t1,t2);
	return 0;

}


void fibonacci(int t, int t1, int t2)
{
	for(int i=0;i<=t;i++)
	{
		printf("%d", t1);
		int nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
		
	}
}
