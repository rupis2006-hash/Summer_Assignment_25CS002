#include <stdio.h>
int main() {
 int num, largest = 1;
 scanf("%d", &num);
 for(int i = 2; i <= num; i++) {
   while(num % i == 0) {
    largest = i;
     num /= i;
         }
        }
  printf("Largest Prime Factor = %d",      largest);
  return 0;
     }