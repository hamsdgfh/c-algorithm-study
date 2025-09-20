/*
 * Platform : BOJ (백준)
 * Problem  : 25304 영수중
 * Tier     : Bronze IV
 * Link     : https://www.acmicpc.net/problem/25304
 * Idea     :
 * Complex. :
 * Note     :
 */

#include <stdio.h>

int money(int x, int y){
    return x * y;
}

int main() {
    int sum = 0; //입력한 총 금액
    int N = 0; //영수증에 적힌 물건의 종류 수
    int a, b; //각 물건의 가격 a, 개수 b
    int all_money = 0; //계산된 총 금액

    scanf("%d", &sum);
    scanf("%d", &N);

    for (int i = 1 ; i <= N ; i++){
        scanf("%d %d", &a, &b);
        all_money += money(a, b);
    }

    if(sum == all_money)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
