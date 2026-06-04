// Addition Code
#include<stdio.h>
int main() {
    float N1;
    float N2;
    printf("Please enter your first number : ");
    scanf("%f", &N1);
    printf("Please enter your second number");
    scanf("%f", &N2);
    float sum = N1 + N2;
    float minus = N1 - N2;
    float product = N1 * N2;
    float Div = N1 / N2;
    printf("Your sum is : %f \n", sum);
    printf("Your Difference is : %f \n", minus);
    printf("Your product is : %f \n", product);
    printf("Your quotient is : %f \n",Div);
    return 0;
}

// use % for modula , gives remainder (only for int)

/*Relation Operators : Defines relation (true:1 , False:0)
== is for checking , a==b questions if a is equal to b.
>,>= ; <,<= ; 
!= is not statement, it gives 1 when statement is false and 0 when statement is true. (dont give space b/w ! and =)
*/

// SYNTAX IS : printf("%d \n", (4>3)&&(3<4));

/* Logical Operators
&& : and
|| : Or
! : not
Works exactly like LOGIC GATES
*/


/*
Priority            Operator
1.                      !
2.                      *,/,%
3.                      +,-
4.                      <,<=,>,>=
5.                      ==,!=
6.                      &&
7.                      ||
8.                      =
*/

/* Short Hand operators
= , += , -= , *= , /= , %=
a += b means a = a + b , where the value of a+b gets stored in a. 
*/