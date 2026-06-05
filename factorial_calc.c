// Factorial of a number
#include<stdio.h>
int main() {
    int n,v_fact = 1;
    printf("Please a enter a number : \n");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--) {
        v_fact = v_fact * i;
    }
    printf("Factorial is : %d \n", v_fact);
}