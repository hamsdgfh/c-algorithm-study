/*
 * Platform : Programmers
 * Level    : 2
 * Problem  : 기능개발
 * Link     : https://school.programmers.co.kr/learn/courses/30/lessons/42586
 * Idea     : 남은 일수 계산 → 큐/그룹핑
 * Complex. : O(n)
 * Note     : 배포 묶음 처리
 */

#include <stdio.h>

int solution(int n) {
    int q = n / 7;
    int r = n % 7;
    
    return (r == 0) ? q : q + 1;
}
