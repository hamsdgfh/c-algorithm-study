#include <stdio.h>

int main(void) {
    int N, M;
    int basket[101]; // N 최대 100

    scanf("%d %d", &N, &M);

    // 바구니 초기화 (1 ~ N)
    for (int i = 1; i <= N; i++) {
        basket[i] = i;
    }

    // M번 역순 뒤집기
    for (int k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        // i ~ j 구간 뒤집기
        while (i < j) {
            int temp = basket[i];
            basket[i] = basket[j];
            basket[j] = temp;
            i++;
            j--;
        }
    }

    // 결과 출력
    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}
