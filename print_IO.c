/*
#include<stdio.h> // This tells the compiler to include the Standard Input Output header file before compiling.
int main() { //This is the main function. It is the absolute starting point of your program.
    printf("HELLO!");
    printf("HELLO! \n");
    printf("HELLO! \n");
    printf("HELLO!");
    return 0; (/* This is how the program tells the operating system, "Hey, I finished running, and everything went perfectly!" 
             Returning 0 conventionally means success. If something went wrong, it might return a different number (like 1).*/
// } 


// Line 1 2 and 9 are skeleton of any C program
// For printing , if u want new line use printf("Hello! \n")
// Anything between "" is considered string , it will be printed as it is.

// use scanf function to register input and and then printf , to dispay it as output.

#include<stdio.h>
int main() {
    int age;
    printf("Please enter your Age");
    scanf("%d", &age); // Remember to use Ampercent before variable name
    printf("Your age is : %d \n", age);
}


