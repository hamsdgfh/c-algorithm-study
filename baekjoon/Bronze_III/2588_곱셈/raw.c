/*
 * Platform : BOJ (백준)
 * Problem  : 2588 곱셈
 * Tier     : Bronze III
 * Link     : https://www.acmicpc.net/problem/2588
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b / 10 % 10));
    printf("%d\n", a * (b / 100));
    printf("%d\n", a * b); 
    
    return 0;
}
