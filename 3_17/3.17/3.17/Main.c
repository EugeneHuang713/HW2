#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float server=0,balance = 0,charge = 0,credit = 0,limit = 0;

	while (server != -1)
	{
		printf("\nEnter account number (-1 to end):");
		scanf("%f", &server);
		if (server == -1)
			break;
		printf("Enter beginning balance: ");
		scanf("%f", &balance);
		printf("Enter total charges: ");
		scanf("%f", &charge);
		printf("Enter total credits:");
		scanf("%f", &credit);
		printf("Enter credit limit: ");
		scanf("%f", &limit);
		
		if ((balance + charge - credit) > limit)
		{
			printf("Credit Limit Exceeded.\n");
			printf("Account:  %f\n", server);
			printf("Credit limit: %.02f\n", limit);
			printf("Balance:  %.02f\n", balance + charge - credit);
		}
	}
	system("pause");
	return 0;

}