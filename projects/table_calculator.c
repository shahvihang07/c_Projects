// Print the table of a number.
// Enter the number whose table you want and enter the last number till which you want the table


#include<stdio.h>
#include<math.h>
int main() {
    int v_n,v_last;
    printf("enter a number : ");
    scanf("%d", &v_n);
    printf("Enter last digit till which you want your table :");
    scanf("%d", &v_last);
    printf("Table is : \n");
    for (int i = v_n; i <= v_last; i = i + v_n)
    {
        printf("%d \n", i);
    }
    return 0;
}
