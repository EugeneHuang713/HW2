#include <stdio.h>
#include <stdlib.h>

int main()
{
	float time = 0, cash;

	while (time != -1)
	{
		printf("\nEnter of hours worked (-1 to end):");
		scanf("%f", &time);
		if (time == -1)
			break;
		printf("Enter hourly rate of the worker (500.00):  ");
		scanf("%f", &cash);
		if(time>40)
			printf("Salary is $%0.2f\n", time * cash+ cash*0.5);
		else
			printf("Salary is $%0.2f\n", time * cash);
	}
	system("pause");
	return 0;
}