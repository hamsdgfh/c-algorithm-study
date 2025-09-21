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
    int H, M;
    int H1, M1;
    int time;
    
    scanf("%d %d", &H, &M);

    time = H * 60 + M - 45;

    if (time < 0)
        time += 24 * 60;

    H1 = time / 60;
    M1 = time % 60;

    printf("%d %d", H1, M1);

    return 0;
}
