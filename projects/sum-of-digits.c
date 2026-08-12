// #include<stdio.h>
// int main() {
//     long long v_num,v_nums,i;
//     int v_sum;
//     printf("Enter any digit between 0 - 999999 \n");
//     scanf("%lld", &v_num);
//     for (long long i = 1000000000; i > 1; i = i / 10)
//     {
//         v_nums = v_num / i;
//         v_sum = v_sum + v_nums;
//         printf("%lld \n", v_nums);
//     }
//     return 0;


// }
#include<stdio.h>
int main() {
    int v_num,v_digit[9],v_sum = 0;
    printf("Enter any digit between 0 - 999999 \n");
    scanf("%d", &v_num);
    for (int i = 0; i < 10; i++) {
        v_digit[i] = v_num % 10;
        v_num = v_num / 10;
    }
    for (int j = 0; j < 10; j++)
    {
        v_sum = v_sum + v_digit[j];
    }
    
    printf("Sum of the digits is %d \n", v_sum);
    return 0;
}