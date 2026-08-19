// Collections of similar data types stored at contigous memory locations.
// syntax for arrays 
/*
int marks[3];  //[ we write number of variable stored here ]
char name[10];
float price[2];
*/
// for marks[3] , 3 blocks are reserved and by default the first box is called the zeroth box. Thus also called 0-based indexing.
// Input and Output of arrays.
/*
scanf("&d", &marks[0]);
printf("%d", marks[1]);

Here marks[x] , x means the specific box in which , we want to perform our function.
*/
// For example
/*
#include<stdio.h>
int main() {
    int marks[3] = {97,98,89};
    printf("%d", marks[0]);
} */
// If you enter value of array  greater than its capacity , the code will abort and this error is runtime error, compiler cannot check it.
// Q. Program to enter price of 3 items and returning final price with gst.
/*
#include<stdio.h>
int main() {
    float items[3],gst[3];
    printf("Enter price of 3 items : \n");
    scanf("%f %f %f", &items[0], &items[1], &items[2]);
    gst[0] = (items[0] * 0.18)+ items[0];
    gst[2] = (items[2] * 0.18) + items[2];
    gst[1] = (items[1] * 0.18) + items[1];
    printf("%.2f %.2f %.2f", gst[0], gst[1], gst[2]);

}

//Same code using loop
#include<stdio.h>
int main() {
    float items[3],gst[3];
    printf("Please Enter price of three items: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &items[i]);
        gst[i] = (items[i] * 0.18) + items[i];
        printf("Inclusive price with gst is : %.2f \n", gst[i]);
    }
    return 0;
}
*/

// Initialisation of Arrays with declaration
// int marks[] = {x,y,z};
// int marks[3] = {x,y,z};  Both works
/*
 Memory reserved by arrays is , memory obtained by datatype * number of array stored
For eg in marks we have stored 3 values , each int on mac occupies 4 bytes of data , so total 4 * 3 = 12 bytes is occupied
*/

// Pointer Arithmetic, Pointer can be incremented or decremented
/*
#include<stdio.h>
int main() {
int myNumbers[4] = {25, 50, 75, 100};
int i;

for(i = 0; i < 4; i++) {
  printf("%p\n", &myNumbers[i]);
}
return 0;
}


int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]);

int myNumbers[4] = {25, 50, 75, 100};

// Get the value of the second element in myNumbers
printf("%d\n", *(myNumbers + 1));

// Get the value of the third element in myNumbers
printf("%d", *(myNumbers + 2));

int myNumbers[4] = {25, 50, 75, 100};

// Change the value of the first element to 13
*myNumbers = 13;

// Change the value of the second element to 17
*(myNumbers +1) = 17;

// Get the value of the first element
printf("%d\n", *myNumbers);

// Get the value of the second element
// printf("%d\n", *(myNumbers + 1));
*/

#include<stdio.h>
int main() {
int num[] = {43,34,45};
printf("%d \n", (int)(sizeof(num)));   // For using %d , we gotta typecast it to int , bcz it returns 
printf("%zu", (sizeof(num) / sizeof(num[0])));   // in size_t or unsigned long , for that we use zu or lu.
}
// Line 110 for number of elements in an array.
//Always use the sizeof formula when looping through arrays. 
//It makes your loops adapt to the array size automatically.

