// Printing all alphabets using pointers.
#include<stdio.h>
int main() {
    char ch = 'a';
    char *ptr = &ch;

    while (*ptr <= 'z')
    {
        printf("%c \n", *ptr);
        (*ptr)++;
    }
    
    
   }
// if you do ptr++ , address of the pointer increases and not its value.