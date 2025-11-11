#include <stdio.h>

int main(){
    // 변수 선언
    int n;
    int a[21];

    //입력
    scanf("%d", &n);

    //계산
    //a[0]와 a[1]은 직접 입력
    //i=2 . . . n까지는 앞의 원소를 더한 값이 a[i]
    a[0] = 0;
    a[1] = 1;
    //출력
    for(int i=2 ; i<=n ; i++){
        a[i] = a[i-1] + a[i-2];
    }
    printf("%d", a[n]);
    
    return 0;
}
