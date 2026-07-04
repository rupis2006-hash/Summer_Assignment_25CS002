#include<stdio.h>
int main() {
    char str[100];
    int i = 0, v = 0, c = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z')) {

            switch(str[i]) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    v++;
                    break;
                default:
                    c++;
              }
             }
            i++;
         }

    printf("Number of vowels = %d\n", v);
    printf("Number of consonants = %d\n", c);

         return 0;
            }