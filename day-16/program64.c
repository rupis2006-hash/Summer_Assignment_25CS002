#include <stdio.h>
int main() 
{
    int arr[100], unique[100];
    int n, i, j, k = 0, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
           }

    for(i = 0; i < n; i++) {
        found = 0;

     for(j = 0; j < k; j++) {
      if(arr[i] == unique[j]) {
           found = 1;
            break;
             }
           }

       if(found == 0)
         {
            unique[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unique[i]);
          }

             return 0;
               }