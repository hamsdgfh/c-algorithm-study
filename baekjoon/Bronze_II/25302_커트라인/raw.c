#include <stdio.h>

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
    int n, k;
    int score[1000];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }
    bubble_sort(score, n);

    printf("%d\n", score[k - 1]);

    return 0;
}
