/*
 * Platform : BOJ (백준)
 * Problem  : 최댓값
 * Tier     : Bronze III
 * Link     : https://www.acmicpc.net/problem/
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main(void) {
    int n, max = 0, idx = 0;
    for (int i = 1; i <= 9; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
            idx = i;
        }
    }
    printf("%d\n%d\n", max, idx);
    return 0;
}
