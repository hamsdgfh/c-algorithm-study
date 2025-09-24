/*
 * Platform : BOJ (백준)
 * Problem  : 210807 개수 세기
 * Tier     : Bronze IV
 * Link     : https://www.acmicpc.net/problem/10807
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main() {
    int N; //정수의 개수
    int V; //찾으려 하는 정수
    int cnt = 0;
    int i;
    
    scanf("%d", &N);
    
    int Num[N]; //중괄호를 활용한 초기화는 불가능

    for (i = 0 ; i < N ; i++){
        scanf("%d", &Num[i]);
    }
    scanf("%d", &V);

    for(i = 0 ; i < N ; i++){
        if (Num[i] == V) cnt++;
    }
    printf("%d", cnt);

    return 0;
}
