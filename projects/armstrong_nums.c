#include<stdio.h>
#include<math.h>
int main() {
int N;
printf("Enter Number(3 digits) \n");
scanf("%d", &N);
int a = (N % 10);
int b = ((N % 100) - a) / 10;
int c = (N - (10 * b + a )) / 100;
int A = (a * a * a) + (b * b * b) + (c * c * c);
if (N == A) {
    printf("Armstrong Number \n");
} else {
    printf("Nops");
}
return 0;
}

