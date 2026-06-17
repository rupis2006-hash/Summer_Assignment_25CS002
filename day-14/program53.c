#include<stdio.h>
int main()
{
    int arr[10], n, i, search;
     printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
       {
     scanf("%d", &arr[i]);
       }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
       {
        if(arr[i] == search)
        {
    printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found");

        return 0;
          } 