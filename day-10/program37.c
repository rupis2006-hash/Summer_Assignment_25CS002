#include <stdio.h>
int main() 
{
  int n =5,i,j;
  for(i=0;i<n;i++) 
   {
 for(j=n-1;j>i;j--)
      printf(" ");
 for(j=0;j<=2*i;j++)
       printf("*");
   printf("\n");
      }
  return 0;
    }