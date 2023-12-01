#include <stdio.h>
int main()
{
    int arr[] = { 3 , 5 ,2 , 1 ,6}, i, t;
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {                             
            if (arr[i] > arr[j])    
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}