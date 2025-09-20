/*
 * Platform : BOJ (백준)
 * Problem  : 2884 알람 시계
 * Tier     : Bronze III
 * Link     : https://www.acmicpc.net/problem/2884
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main() {
    int N, X;
    int a;
    int cheak = 1;
    scanf("%d %d", &N, &X);

    for (int i = 1 ; i <= N ; i++){
        scanf("%d", &a);

        if (a<X){
            if(!cheak) printf(" ");
            printf("%d", a);
            cheak = 0;
        }
    }
    return 0;
}
