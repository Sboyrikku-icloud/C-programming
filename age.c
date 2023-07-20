#include<stdio.h>

int main()
{
	int a ;

	//input age
	printf("Enter the age of the person: ");
	scanf("%d",&a);

	//check voting eligibility
	if (a>=18)
	{
		printf("Eligibal for voting");
	}
	else
	{
		printf("Not eligibal for voting\n");
	}

	return 0;
}
