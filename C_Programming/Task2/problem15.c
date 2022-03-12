/*
 * problem15.c
 *
 *  Created on: Mar 12, 2022
 *      Author: mohamed
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j, size, temp , n;
	printf("Enter array size: ");
	fflush(stdout);
	scanf("%d", &size);
	int arr[size];
	printf("Enter array elements: ");
	fflush(stdout);
	for (i = 0 ; i < size ; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter number of rotations: ");
	fflush(stdout);
	scanf("%d", &n);

	printf("array before rotations\n");
	for(i = 0 ; i < size ; i++)
	{
		printf("%d ", arr[i]);
	}

	for(i = 0 ; i < n ; i++)
	{
		temp = arr[size - 1];
		j = size - 2;
		while(j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[0] = temp;
	}
	printf("\narray after rotations\n");
	for(i = 0 ; i < size ; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

