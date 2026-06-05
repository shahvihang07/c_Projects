/*   For Loop
for(initialisation; condition; updation) {
    // do something
}
*/

/*
#include<stdio.h>
int main() {
    for ( int i = 100; i >= 0; i=i-1) // i++ means i = i + 1 , only valid for 1
    // increment operator (++i and i++) | i++ means use i first then increase | ++1 means increase value of i by 1 then use it
    // similarly --i and i--
{
    printf("%d \n", i);
}
}
*/


/*
#include<stdio.h>
int main() {
    for ( char ch = 'a'; ch <= 'z'; ch++) // type string with '' only.
    {
        printf("%c \n", ch);
    }
    
}
*/

// No terminatory statement means infinite loop , BE CAREFUL.'

// WHILE LOOP
/*
#include<stdio.h>
int main() {
    int i,n = 0;
    printf("Please enter a number \n");
    scanf("%d", &i);
    // while (n <= i)
    // {
    //     printf("%d \n", n);
    //     n++;
    // }

    for (int n = 0; n <= i; n++)
    {
        printf("%d \n", n);
    }
}
*/

// Do while loop
/*
#include<stdio.h>
int main() {
    int i = 9;
    do {
        printf("%d \n", i);
        i--;
    } while (i >= 0);
}
*/

// Q. Print the Sum of First n Natural Numbers.Also, print them in reverse.
/*
#include<stdio.h>
int main() {
    int i,v_sum =0;
    printf("Please type a number (>=1) \n");
    scanf("%d", &i);
    // int v_sum = (i * (i + 1)) / 2;
    // printf("Sum is : %d \n", v_sum);
    for (int n = i; n >= 1; n--)
    {
        printf("%d \n", n);
    }
    for ( int n = 1; n <= i; n++)
    {
        v_sum = v_sum + n; // v_sum += 1
    }
    printf("Sum is : %d \n", v_sum);
    }
*/

// Q. Print the table of a number.
// #include<stdio.h>
// int main() {
//     int v_n,v_last;
//     printf("enter a number : ");
//     scanf("%d", &v_n);
//     printf("Enter last digit till which you want your table :");
//     scanf("%d", &v_last);
//     printf("Table is : \n");
//     for (int i = v_n; i <= (v_n * v_last); i = i + v_n)
//     {
//         printf("%d \n", i);
//     }
    

// Break Loop
// #include <stdio.h>

// int main() {
//     for(int i=1; i<=5; i++) {
//         if(i == 3) {
//             break;
//         }
//         printf("%d\n", i);
//     }

//     printf("end");

//     return 0;
// }    

// Continue statement is used when we want to continue loop while excluding a particular case.
/*
#include <stdio.h>
int main() {
    for(int i=1; i<=5; i++) {
        if(i == 3) { // skip
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}
*/

#include<stdio.h>
int main() {
    int i,v_sum = 0;
    for (int i = 5; i <= 50; i = i++) 
    {
    v_sum = v_sum + i;
    }
    printf("%d", v_sum);
    
}





