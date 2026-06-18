#include<stdio.h>
int main() 
{
    int arr[100], n, i;
    int sum = 0, total = 0, missing;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
          }

    total = (n + 1) * (n + 2) / 2;
    missing = total - sum;

    printf("Missing number = %d", missing);

            return 0;
               }