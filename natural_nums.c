#include<stdio.h>
int main() {
   float v_numb;
   printf("Please enter a number \n");
   scanf("%f", &v_numb);
   int v_box = (int) v_numb;
   float v_dec = v_numb - v_box;
    if (v_numb >= 1 && v_dec == 0) {
    printf("Natural Number");
   } 
    else {
    printf("Not Natural");
   }
   return 0;
}