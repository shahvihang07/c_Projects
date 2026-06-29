// Sum of first n natural numbers using recursion
#include<stdio.h>
int sum(int n);

int main() {
    int n;
    printf("Enter Number : \n");
    scanf("%d", &n);
    printf("Sum is : %d", sum(n));


}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    int sumNM1 = sum(n-1);
    int sumN = sumNM1 + n;
    return sumN;
}

