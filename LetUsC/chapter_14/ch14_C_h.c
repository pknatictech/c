/* Given an array p[5], write a function to shift it circularly left by two positions, Thus if the original array is {15,30,28,19,61} then after shifting it will be {28,19,61,15,30} call this function for 4 x 5 matrix and get its rows left shifted. */
#include <stdio.h>
#define max 5
void arr1d(int *arr, int n);
void print1d(int *arr, int n);
void arr2d(int arr2[][max], int n);
void print2d(int arr2[][max], int n);
int main()
{
    int arr[max] = {15, 28, 30, 19, 61};
    int arr2[][max] = {
        15, 28, 30, 19, 61,
        19, 29, 33, 20, 62,
        18, 30, 34, 21, 63,
        17, 31, 35, 22, 64,
        16, 32, 36, 23, 65};
    int q[max];
    int i, j, k, temp;
    // for 1d array
    // arr1d(arr, max);

    // Print 1d array
    // print1d(arr, max);

    // for 2d array
    // arr2d(arr2, max);

    // Print 2d array
    // print2d(arr2,max);

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            q[j] = arr2[i][j];
        }
        arr1d(q, max);
        for (j = 0; j < max; j++)
        {
            arr2[i][j] = q[j];
        }
    }
    
    print2d(arr2, max);
    return 0;
}
void arr1d(int *arr, int n)
{
    int temp, i, j;
    for (i = 0; i < 2; i++)
    {
        temp = arr[0];
        for (j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}
void print1d(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void arr2d(int arr2[][max], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < 2; k++)
        {
            for (j = 0; j < n; j++)
            {
                temp = arr2[i][0];
                for (j = 0; j < n - 1; j++)
                {
                    arr2[i][j] = arr2[i][j + 1];
                }
                arr2[i][n - 1] = temp;
            }
        }
    }
}
void print2d(int arr2[][max], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}




// #include <stdio.h>
// int main()
// {
//     int arr1[4][5] = {2, 4, 5, 3, 6, 7, 8, 1, 4, 7, 9, 5, 6, 4, 6, 3, 4, 6, 7, 9};
//     int i, j, arr2[4][5];
//     for (j = 0; j < 4; j++)
//     {
//         for (i = 0; i < 5; i++)
//         {
//             if (i >= 0 && i < 3)
//             {
//                 arr2[j][i + 2] = arr1[j][i];
//             }
//             if (i > 2 && i < 5)
//             {
//                 arr2[j][i - 3] = arr1[j][i];
//             }
//         }
//     }
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }