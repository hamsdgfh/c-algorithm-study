#include <stdio.h>
#include <stdlib.h>

int cmp(int* x, int* y){ //비교하는 값의 주소(포인터)를 인수로 줘야한다.
    if(*x < *y) return -1;
    else if(*x > *y) return 1;
    else return 0;
}

int main(){
    int a[1000000] = {0};
    int n;

    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    
    qsort(a, n, sizeof(int), cmp);
    
    for(int i=0 ; i<n ; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
