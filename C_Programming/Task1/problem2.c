#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num, sum=0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &num);
	sum += num;
	while(num)
	{
		printf("Enter a number: ");
		fflush(stdout);
		scanf("%f", &num);
		sum += num;
	}
	printf("sum = %.2f",sum);

	return 0;
}
