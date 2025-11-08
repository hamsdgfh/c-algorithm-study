#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main(void) {
    int N;
    int P[1000];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
	scanf("%d", &P[i]);

    qsort(P, N, sizeof(int), cmp);

    int sum = 0;      // 정답
    int prefix = 0;   // 누적 시간

    for (int i = 0; i < N; i++) {
        prefix += P[i];
        sum += prefix;
    }

    printf("%d\n", sum);
    return 0;
}
