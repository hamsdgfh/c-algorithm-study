/*
 * Platform : Programmers
 * Level    : 0
 * Problem  : 홀짝 구분하기
 * Link     : https://school.programmers.co.kr/learn/courses/30/lessons/181944
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d is %s", a, (a % 2 == 0 ? "even" : "odd"));
    return 0;
}
