#include<stdio.h>
void num(int a , int b, int *max);

int main() {
    int a,b,max;
    printf("Enter two integers : \n");
    scanf("%d %d", &a, &b);
    num(a, b, &max);
    printf("Greater Number is : %d \n", max);
}

void num(int a, int b, int *max) {
    if (a >= b)
    {
        *max = a;
    } else {
        *max = b;
    }
    

}