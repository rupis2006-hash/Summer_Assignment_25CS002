#include <stdio.h>
int main() {
 long long binary;
 int decimal = 0, base = 1;
 scanf("%lld", &binary);
  for(; binary > 0; binary /= 10) {
  decimal += (binary % 10) * base;
   base *= 2;
      }
  printf("Decimal = %d", decimal);
   return 0;
     }