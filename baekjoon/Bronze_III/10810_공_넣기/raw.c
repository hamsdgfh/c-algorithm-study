#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    int a[101] = {0};              // 1~N 사용, 초기값 0

    for (int t = 0; t < M; t++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int x = i; x <= j; x++) a[x] = k;   // 범위 덮어쓰기
    }

    for (int x = 1; x <= N; x++) {
        if (x > 1) putchar(' ');
        printf("%d", a[x]);
    }
    putchar('\n');
    return 0;
}
