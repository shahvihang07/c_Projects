// Q. Keep taking number as input from user until user enters an odd number.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n % 2 == 0) {
        printf("Enter another number: ");
        scanf("%d", &n);
    }
    printf("You entered an odd number: %d", n);
    return 0;
}









