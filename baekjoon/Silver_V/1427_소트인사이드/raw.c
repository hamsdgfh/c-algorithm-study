#include <stdio.h>
#include <string.h>

void bubble_sort(int a[], int n) {
    int tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    char N[11];
    int digits[10];  // 각 자리수
    int len;

    scanf("%s", N);

    len = strlen(N);

    for (int i = 0; i < len; i++) {  //숫자로 변환
        digits[i] = N[i] - '0';
    }

    bubble_sort(digits, len);

    for (int i = 0; i < len; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
