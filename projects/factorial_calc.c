// Factorial of a number
/*
#include<stdio.h>
long long main() {
    long long n,v_fact = 1;
    printf("Please a enter a number : ");
    scanf("%lld", &n);
    for(long long i = n; i >= 1; i--) {
        v_fact = v_fact * i;
        // printf("%lld \n", i);
        // printf("%lld \n", v_fact);
    }
    printf("Factorial is : %lld \n", v_fact);
}
*/

// due to integer overflow , int is unable to store large character size , thus we use long long.

// Same code using recursion
#include<stdio.h>
int product(int n);

int main() {
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    printf("Factorial is %d", product(n));
}

int product(int n) {
    if (n == 1) {
        return 1;
    }
    int pm1 = product(n - 1);
    int p = pm1 * n;
    return p;
}