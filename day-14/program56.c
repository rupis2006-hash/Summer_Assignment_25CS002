#include<stdio.h>
int main()
{
    int arr[10], n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++)
    {
        count = 0;

     for(j = 0; j < n; j++)
        {
      if(arr[i] == arr[j])
            {
       count++;
            }
          }

        if(count > 1)
        {
       printf("%d ", arr[i]);
        }
       }

           return 0;
             }