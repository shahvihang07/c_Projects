// Q. Keep taking number as input from user until user enters an odd number.

#include<stdio.h>
int main() {
    int i,v_n;
    for (int i = 1; i++;)
    {
        if (v_n % 2 != 0) {
            break;
        }
        printf("Please Enter a number : \n");
        scanf("%d", &v_n);

    }
    printf("Your Number is odd.");
}


/*
int main() {
    int n;
    do {
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 2 != 0) {
            break;
        }

    } while(1); // (1) means while it is true.

    return 0;
}









*/