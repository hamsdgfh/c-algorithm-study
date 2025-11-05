#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    int* pa = (int*)a;
    int* pb = (int*)b;
    if(pa[0] < pb[0]) return -1;
    if(pa[0] > pb[0]) return 1;
    if(pa[1] < pb[1]) return -1;
    if(pa[1] > pb[1]) return 1;
    
    return 0;
}

int main(){
    int n;
    int pts[100000][2];

    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        scanf("%d%d", &pts[i][0], &pts[i][1]);
    }

    qsort(pts, n, sizeof(pts[0]), cmp);

    for(int i=0 ; i<n ; i++){
        printf("%d %d\n", pts[i][0], pts[i][1]);
    }
    return 0;
}
