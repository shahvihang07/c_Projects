/*
#include<stdio.h>
 
int fibonacci(int n);

int main() {
    int n;
    printf("Number  : \n");
    scanf("%d", &n);
    printf("%d", fibonacci(n));

}

 int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } if (n == 1) {
        return 1;
    }
        int fNM1 = fibonacci(n-1);
        int fNM2 = fibonacci(n-2);
        int fib = fNM1 + fNM2; 
        return fib;
    }

*/

 // Using Loop
#include<stdio.h>

int main() {
    int n,fibonacci,a = 0,b = 1;
    printf("Enter Number : \n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("fib of %d is %d \n", i, a);
        fibonacci = a + b;
        a = b;
        b = fibonacci;
      
     }
    
    // printf("%d", fibonacci);
    return 0;

}






