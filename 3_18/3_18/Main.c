#include <stdio.h>
#include <stdlib.h>

int main()
{
	float dollar = 0;

	while (dollar != -1)
	{
		printf("\nEnter sales in dollars (-1 to end):");
		scanf("%f", &dollar);
		if (dollar == -1)
			break;
		printf("Salary is: %.02f\n", dollar*0.09+200);
		
	}
	system("pause");
	return 0;

}