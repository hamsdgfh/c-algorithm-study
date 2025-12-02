#include <stdio.h>

int main() {
    int n, m;
    int a[10000] = {0}; //입력값
    int b[10000] = {0}; //누적값
    int count = 0;

    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    //누적 합 구하기
    b[0] = a[0];

    for(int i=1; i<n ;i++){
        b[i] = b[i-1] + a[i];
    }
    
    //브루트포스 알고리즘 => 시간 초과
    //모든 가능한 (i,j)에 대하여 a[i]~a[j]를 더해서 그 합이 m이면 countfmf 1씩 증가
    for (int i=0 ; i<n ; i++){
        for(int j=i ; j<n; j++){
            int sum = 0;
            if(i == 0) sum = b[j];
            else sum = b[j] - b[i-1];
            if(sum == m) count++;
        }
    }
    printf("%d", count);
    return 0;
}
