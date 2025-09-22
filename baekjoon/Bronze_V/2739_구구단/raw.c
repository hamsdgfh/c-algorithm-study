/*
 * Platform : BOJ (백준)
 * Problem  : 2739 구구단
 * Tier     : Bronze III
 * Link     : https://www.acmicpc.net/problem/2739
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);
    
    for (int i = 1 ; i <= 9 ; i++){
        printf("%d * %d = %d\n", N, i, N*i);
    }
    return 0;
}
