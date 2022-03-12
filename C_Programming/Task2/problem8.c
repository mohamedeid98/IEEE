/*
 * problem8.c
 *
 *  Created on: Mar 12, 2022
 *      Author: mohamed
 */


#include <stdio.h>
#include <stdlib.h>

int check_arm(int num)
{
	int sum=0, dig;
	while(num)
	{
		dig = num % 10;
		sum += dig*dig*dig;
		num /= 10;
	}
	return sum;
}


int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);


	if(check_arm(num) == num)
		printf("YES");
	else
		printf("NO");


	return 0;
}
