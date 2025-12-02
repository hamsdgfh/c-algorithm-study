#include <stdio.h>

int main() {
    int n;
    long long w[91];
    scanf("%d", &n);

    w[0] = 0;
    w[1] = 1;

    for (int i = 2; i <= n; i++) {
        w[i] = w[i - 1] + w[i - 2];
    }

    printf("%lld", w[n]);
    return 0;
}
