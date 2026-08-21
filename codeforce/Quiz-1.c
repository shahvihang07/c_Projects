// If there was no identation in input
/*
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,M,inp[10000],highest = 0,lowest = -100;
    scanf("%d %d", &n, &M);
    if (n < 1 || M > 100) {
        printf("-1");
    } else {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &inp[i]);
            if (inp[i] >= 0) {
             if  (highest < inp[i]) {
                highest = inp[i];
              }
            } else if (inp[i] < 0) {               
                if (lowest < inp[i]) {
                    lowest = inp[i];
                }
            }
        }
        
    }
    if (highest > abs(lowest)) {
        printf("-1");
    } else {
        printf("%d", highest);
    }
}
*/ 

#include <stdio.h>

int main() {
    int n, M;
    int highest = 0;
    int lowest = 100;

    scanf("%d %d", &n, &M);

    if (n < 1 || M > 100) {
        printf("-1");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        char sign;
        int k;

        scanf(" %c %d", &sign, &k);

        if (sign == '+') {
            if (k > highest)
                highest = k;
        }
        else {
            if (k < lowest)
                lowest = k;
        }
    }

    if (highest > lowest) {
        printf("-1");
    }
    else {
        printf("%d", highest);
    }

    return 0;
}