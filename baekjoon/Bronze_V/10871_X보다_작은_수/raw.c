/*
 * Platform : BOJ (백준)
 * Problem  : 10871 X보다 작은 수
 * Tier     : Bronze V
 * Link     : https://www.acmicpc.net/problem/10871
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main() {
    int N, X;
    int a;
    int check = 1;
    scanf("%d %d", &N, &X);

    for (int i = 1 ; i <= N ; i++){
        scanf("%d", &a);

        if (a<X){
            if(!check) printf(" ");
            printf("%d", a);
            check = 0;
        }
    }
    return 0;
}
