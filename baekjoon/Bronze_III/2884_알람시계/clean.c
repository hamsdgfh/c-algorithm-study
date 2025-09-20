#include <stdio.h>

int main(void) {
    int H, M;
    scanf("%d %d", &H, &M);

    int time = (H * 60 + M - 45 + 24 * 60) % (24 * 60); // 보정 포함

    printf("%d %d\n", time / 60, time % 60);
    return 0;
}
