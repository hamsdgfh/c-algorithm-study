#include <stdio.h>

void bubble_sort(int a[], int n) {
    int tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int t;
    int n;
    int a[50];

    scanf("%d", &t); 

    for (int p= 1; p <= t; p++) {
        scanf("%d", &n);

   		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
    	}
        
    	bubble_sort(a, n);
    
		printf("#%d ", p);
    
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
    	}
		printf("\n");
    }
    return 0;
}
