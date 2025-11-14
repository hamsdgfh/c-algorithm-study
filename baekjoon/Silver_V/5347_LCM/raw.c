#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long g = gcd(a, b);
        long long l = (a / g) * b;

        printf("%lld\n", l);
    }

    return 0;
}
