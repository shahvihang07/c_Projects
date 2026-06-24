// Pointers
// A variable that stores memory address of another variable.
/*  syntax
    int age = 18;
    int *ptr = &age;  // * = value of address .... & = address of
    int _age = *ptr
*/
// #include<stdio.h>

// int main() {
//     int age = 18;
//     int *ptr = &age;
//     int _age = *ptr;
//     printf("%d", *ptr);
// }

// find output
/*
#include<stdio.h>

int main() {
    int *ptr;
int x;

ptr = &x;
*ptr = 0;

printf("x = %d\n", x);
printf("*ptr = %d\n", *ptr);

*ptr += 5;
printf("x = %d\n", x);
printf("*ptr = %d\n", *ptr);

(*ptr)++;
printf("x = %d\n", x);
printf("*ptr = %d\n", *ptr);

return 0;
}
*/

// Pointer to pointer
// A variable that stores the memory address of another pointer.

// Function by call
// call by value and call by reference
/*
#include <stdio.h>

void square(int n);
void _square(int *n);

int main() {
    int number = 4;
    square(number);
    printf("number = %d\n", number);
    
    _square(&number);
    printf("number = %d\n", number);

    return 0;
}

// Call by Value
void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}

// Call by Reference
void _square(int* n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}
*/

// Q
/*
#include <stdio.h>

void printAddress(int n);

int main() {
    int n = 4;
    
    printf("%p\n", &n);
    printAddress(n);
    
    return 0;
}

void printAddress(int n) {
    printf("%p\n", &n);
}
*/

// Both address here will be different because in call by value a copy is made and assigned 4 but the address is not same as the original.

// Q Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
/*
#include<stdio.h>
void calculator(float a , float b);

int main() {
    float a,b;
    printf("Please Enter Two numbers : \n");
    scanf("%f %f", &a, &b);
    calculator(a , b);
}

void calculator(float a, float b) {
    float v_sum = (a + b);
    float v_product = (a * b);
    float v_avg = (v_sum) / 2;
    printf("%.2f %.2f %.2f", v_sum, v_product, v_avg);
}
*/

// Using pointers
#include <stdio.h>

void calculator(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;
    
    calculator(a, b, &sum, &prod, &avg);
    
    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}

void calculator(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}


