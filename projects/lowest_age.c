// program that finds the lowest age among different ages.
#include<stdio.h>
int main() {
    int v_age[4];
    printf("Enter 5 different ages: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v_age[i]);
    }
    int lowest = v_age[0];
    for (int i = 1; i < 5; i++)
    {
        if (lowest > v_age[i]) {
            lowest = v_age[i];
        }

    }
    printf("Lowest age is : %d \n", lowest);
    
    
    return 0;
}