/*
 * problem4.c
 *
 *  Created on: Mar 12, 2022
 *      Author: mohamed
 */


#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

struct s
{
	int max;
	int min;
};


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

struct s func(int arr[] , int size)
{
	struct s result;

	selectionSort(arr , size);
	result.max = arr[size - 1];
	result.min = arr[0];

	return result;
}

int main()
{
	struct s vals;
	int i, n;
	printf("Enter array size: ");
	fflush(stdout);
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements: ");
	fflush(stdout);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	vals = func(arr, n);
	printf("Min is %d,\nMax is %d",vals.min, vals.max);


	return 0;
}
