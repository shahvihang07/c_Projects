#include<stdio.h>
#include<math.h>

void sq_root(float n);

int main() {
    float n;
    printf("Number \n");
    scanf("%f", &n);
    sq_root(n);
    return 0;           // Forgot

}

void sq_root(float n) {
    float root = pow(n,0.5);            // Use sqrt() fn
    printf("Square root of the number is : %.2f \n", root);
    

}