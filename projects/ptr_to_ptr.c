// Printing Value of i from its pointer to pointer.
#include<stdio.h>

int main() {
    int i;
    printf("Please enter a integer : \n");
    scanf("%d", &i);
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
}