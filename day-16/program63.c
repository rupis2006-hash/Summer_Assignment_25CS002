#include <stdio.h>
int main() 
{
    int arr[100], n, sum;
    int i, j, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
           n}

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
     for(j = i + 1; j < n; j++) {
     if(arr[i] + arr[j] == sum) {
   printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
               }
            }
          }

     if(found == 0) {
     printf("No pair found.");
        }

          return 0;
             }