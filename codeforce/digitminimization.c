
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int v_int[round], v_dig[20],d,round;
//     char n_d[20];
//     scanf("%d", &round);
//     for (int z = 0; z < round; z++)
//     {
//     scanf("%d", &v_int[z]);

//     sprintf(n_d, "%d", v_int[z]);
//     d = strlen(n_d);

//     if (10 <= v_int && v_int <= 100) {
//         printf("%d", v_int % 10);
//     }
//     else {
//         for (int i = 0; i < d; i++) {
//             v_dig[i] = v_int[z] % 10;
//             v_int[z] = v_int / 10;
//         }

//         int lowest = v_dig[0];

//         for (int j = 0; j < d; j++) {
//             if (lowest > v_dig[j]) {
//                 lowest = v_dig[j];
//             }
//         }

//         printf("%d \n", lowest);
//     }

    
// }
// return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    int v_int[10000], v_dig[20], d, round;
    char n_d[20];

    scanf("%d", &round);

    for (int z = 0; z < round; z++) {
        scanf("%d", &v_int[z]);

        sprintf(n_d, "%d", v_int[z]);
        d = strlen(n_d);

        if (10 <= v_int[z] && v_int[z] <= 100) {
            printf("%d\n", v_int[z] % 10);
        }
        else {
            for (int i = 0; i < d; i++) {
                v_dig[i] = v_int[z] % 10;
                v_int[z] = v_int[z] / 10;
            }

            int lowest = v_dig[0];

            for (int j = 0; j < d; j++) {
                if (lowest > v_dig[j]) {
                    lowest = v_dig[j];
                }
            }

            printf("%d\n", lowest);
        }
    }

    return 0;
}