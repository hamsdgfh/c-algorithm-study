#include <stdio.h>

void bubble_sort(int a[], int n){     //반환값이 없으면 void (배열 a 자체가 변수)
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++ ){
            if(a[j] > a[j+1]) {     //역순이면, a[j]와 a[j+1]을 교환(exchange/swap)
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main() {
    int a[1000] = {0};
    int n;
    
    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    
    bubble_sort(a, n);

    for(int i=0 ; i<n ;i++){
        printf("%d\n", a[i]);
    }
    
    return 0;
}
