#include <stdio.h>

void bubble_sort(int a[], int n){ 
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++ ){
            if(a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main() {
    int a[5] = {0};
    int mean = 0;
    
    for(int i=0 ; i<5 ; i++){
        scanf("%d", &a[i]);
    }
    
    bubble_sort(a, 5);

    for(int i=0 ; i<5 ;i++){
        mean += a[i];
    }
    printf("%d\n", mean/5);
    printf("%d", a[2]);
    
    return 0;
}
