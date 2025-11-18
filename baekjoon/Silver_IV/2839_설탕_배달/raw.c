#include <stdio.h>

int main() {
    int n; //전체 무게
    int ans= -1; //해답 : 조건을 만족하는 x와 y의 합의 최소값
    
    scanf("%d", &n);

    for(int x=0 ; x <= n/3 ; x++){
        for(int y=0 ; y<= n/5 ; y++){
            if(3*x+5*y==n){
                int bag = x+y;
                if(ans == -1 || bag < ans){
                    ans = bag;
                }
            }
        }
    }
    printf("%d", ans);

    return 0;
}
