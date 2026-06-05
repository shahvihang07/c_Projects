 /*
 If (condition) {
    text
 }

 else {
    text
 }
 similarly for else if
  */

/*    TERNARY OPERATOR
      condition ? doSomething if TRUE : doSomething if FALSE; 



*/
/*
#include<stdio.h>
int main() {
 int N1,N2;
 printf("Enter 2 nums \n");
 scanf("%d %d", &N1,&N2);
 N1 > N2 ? printf("%d \n", N2) : printf("%d \n", N1);
return 0;
} */

/* Switch

switch (expression)
{
case constant expression:
    code 
   break;

default:
   break;

Switch is also a conditional operator, we can use it for multiple statements , order doesnt matter and if and switch can be nested.
} */


/*
#include<stdio.h>
int main () {
   int Day;
   printf("Enter day 1-7: \n");
   scanf("%d", &Day);

   switch (Day)
   {
   case 1 : printf("Monday \n");
      break;
   case 2 : printf("Tuesday \n");
      break;
   case 3 : printf("Wednesday \n");
      break;
   case 4 : printf("thurs \n");
      //break;  
   case 5 : printf("fri \n");
      //break;  
   case 6 : printf("sat \n");
      //break;   


   default: printf("Invalid day \n");
      
   } */
// You can use switch between any case also.



// Good Question
#include<stdio.h>
int main() {
   int x = 2;
   if (x=1) {
      printf("X is equal to 1");          // This is actual output , bcz x = 1 assigns value of x as 1 as a variable , since here 
   } else {                               // anything except 0 means True , thus the output.
      printf("X is not equal to 1");
   } 
}

// Note for checking value , we use X == 1.


/*

#include<stdio.h>
int main() {
    char ch;
    printf("enter character : ");
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <= 'Z') {
        printf("upper case \n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("lower case\n");
    }
    else {
        printf("not english letter\n");
    }
    
    return 0;
}

*/

// In C , every character has an ASCI value which the compiler understands
// for eg asci value of a is 97 , thus ch > a and ch > 97 is same for the compiler