#include <stdio.h>
#include <stdlib.h>

int main()
{
	float rate,cash=0,day;

	while (cash != -1)
	{
		printf("\nEnter loan principal (-1 to end):");
		scanf("%f", &cash);
		if (cash == -1)
			break;
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%f", &day);
		printf("The interest charge is $%0.2f\n", cash* rate* day/365);
	}
	system("pause");
	return 0;
}