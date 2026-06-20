// // Swaps two numbers
// #include<stdio.h>

// int main() {
//     float a,b,c;
//     printf("enter two numbers : \n");
//     scanf("%f %f", &a, &b);
//     c = a;
//     a = b;
//     b = c;

//     printf("%.2f %.2f \n", a, b);
// }

// Better program using function , call by reference.
#include<stdio.h>
void swap(int *a, int *b);


int main() {
    int x = 3, y = 5;
    swap(&x, &y);
    printf("%d %d \n", x, y);
    

}


void swap(int *a, int *b) {
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
    printf("%d %d \n", *a, *b);

}