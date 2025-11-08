#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swap(Point *a, Point *b) {
    Point temp = *a;
    *a = *b;
    *b = temp;
}

int cmp(Point a, Point b) {
    if (a.y < b.y) return -1;
    if (a.y > b.y) return 1;
    if (a.x < b.x) return -1;
    if (a.x > b.x) return 1;
    return 0;
}

void qSort(Point arr[], int left, int right) {
    int i = left;
    int j = right;
    Point cnt = arr[(left + right) / 2];

    while (i <= j) {
        while (cmp(arr[i], cnt) < 0) i++;
        while (cmp(arr[j], cnt) > 0) j--;
        if (i <= j) {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    if (left < j) qSort(arr, left, j);
    if (i < right) qSort(arr, i, right);
}

int main() {
    int N;
    Point arr[100000];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}
