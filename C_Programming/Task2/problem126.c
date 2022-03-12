/*
 * problem126.c
 *
 *  Created on: Mar 12, 2022
 *      Author: mohamed
 */
#include <stdio.h>
#include <stdlib.h>

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

void minmax(int arr[] , int size , int *min , int *max)
{
	selectionSort(arr , size);
	*min = arr[0];
	*max = arr[size - 1];
}


int main()
{
	int i, n, min, max;
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

	minmax(arr , n , &min ,&max);
	printf("Min is %d\nMax is %d",min, max);


	return 0;
}















