// Remember to give a meaningful name to the variable.
#include<stdio.h>
int main() {
    int age = 18;
    float pi = 3.14;
    char hashtage ='#';             // Remember to use single quotes for char
    printf("Age is %d \n", age);
    printf("Value of pi is %f \n", pi);
    printf("Hashtage look like this %c \n", hashtage);
    return 0;
}

// here int is a type of variable , age is the variable name and 18 is the value stored.
// Dont use quotes in the variable value , eg '18' , this syntax is wrong.
// while using the printf fn , ('single quotes') means a string value , so use double quotes.
// There are multiple functions to store and print variables , which are as follows:-
// Data Type	Specifier	Example
// int	        %d	    printf("%d", a);
// float	    %f	    printf("%f", b);
// double	    %lf	    printf("%lf", d);
// char	        %c	    printf("%c", ch);
// string	    %s	    printf("%s", str);
// long long	%lld	printf("%lld", x);
// Rules for variables ; 1. they are case sensitive 2. 1st character should be alpha or _ . 3. No comma / blank space 4. no sign except _.

/* GOOD QUESTION!
#include<stdio.h> 
int main() {
int x = printf("Hello");
    printf("%d", x);
    return 0;
}
 Here x is a variable which is a string , since it returns as an integer , no of character will also come as an output.*/

 // Declare variable first then only use it.
 