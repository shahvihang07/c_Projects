/* Alex and Bob have just discovered the Domino's outlet on campus and decide to share a 
large pizza containing n slices.They start eating the pizza one after another, with Alex going first. 
On each turn, a person can eat either 1 or 2 slices.  They both want to be the one who eats the last slice, 
so they carefully (and optimally) choose how many slices to eat on their turns. */

//Given n, determine who will eat the last slice if they both eat optimally.

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
if (n % 3 == 0)
{
    printf("Bob");
} else {
    printf("Alex");
}
return 0;
}