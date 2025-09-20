/*
 * Platform : BOJ (백준)
 * Problem  : 25304 영수증
 * Tier     : Silver V
 * Link     : https://www.acmicpc.net/problem/1181
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main(void) {
    int sum, N;       // 영수증 총 금액, 물건 종류 수
    int total = 0;    // 계산된 총 금액

    scanf("%d %d", &sum, &N);

    for (int i = 0; i < N; i++) {
        int a, b;             // 가격, 개수
        scanf("%d %d", &a, &b);
        total += a * b;       // 바로 누적
    }

    printf("%s\n", (sum == total) ? "YES" : "NO");
    return 0;
}
