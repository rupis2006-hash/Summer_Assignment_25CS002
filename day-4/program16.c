#include <stdio.h>
int main() {
int start, end, num, temp, rem, sum;
scanf("%d %d", &start, &end);
num = start;
  do  
  {
    sum = 0;
    temp = num;
    while(temp != 0) {
     rem = temp % 10;
      sum += rem * rem * rem;
       temp /= 10;
        }
      if(sum == num)
      printf("%d ", num);
      num++;
       }
     while(num <= end);
     return 0;
      }