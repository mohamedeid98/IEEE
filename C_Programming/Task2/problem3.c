/*
 * test.c
 *
 *  Created on: Mar 6, 2022
 *      Author: mohamed
 */


#include <stdio.h>
#include <stdlib.h>

int **arr1;
int **arr2;
int **result;

int** arr_init(int x, int y)
{
    int **arr;
    int i;
    arr = (int**)malloc(sizeof(int*)*x);
    for(i = 0 ; i < x ; i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*y);
    }
    return arr;
}

void get_arr(int **arr, int x, int y)
{
    int i , j;

    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void arr_mul(int **arr1 , int row1, int **arr2 , int row2, int col2, int **arr)
{
    int i, j, k, sum=0;
    for(i = 0 ; i < row1 ; i++)
    {
        for(j = 0 ; j < col2 ; j++)
        {
            for(k = 0 ; k < row2 ; k++)
            {
                sum+= arr1[i][k] * arr2[k][j];
            }
            arr[i][j] = sum;
            sum = 0;
        }

    }

}

void print_arr(int **arr, int x, int y)
{
    int i , j;
    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row1, row2, col1, col2;
    printf("Enter 1st array size: ");
    fflush(stdout);
    scanf("%d%d", &row1, &col1);

    arr1 = arr_init(row1, col1);
    printf("Enter 1st array elements:\n");
    get_arr(arr1, row1, col1);

    printf("Enter 2nd array size: ");
    fflush(stdout);
    scanf("%d%d", &row2, &col2);
    arr2 = arr_init(row2, col2);
    printf("Enter 1st array elements:\n");
    get_arr(arr2, row2, col2);

    print_arr(arr1, row1, col1);
    printf("\n");
    print_arr(arr2, row2, col2);
    printf("\n");

    result = arr_init(row1, col2);
    arr_mul(arr1 , row1 , arr2 , row2, col2, result);
    printf("Result: \n");
    print_arr(result, row1, col2);

    return 0;
}
