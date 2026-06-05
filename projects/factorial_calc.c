// Factorial of a number
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

// due to integer overflow , int is unable to store large character size , thus we use long long.