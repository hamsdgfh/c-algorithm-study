/*
 * Platform : Programmers
 * Level    : 0
 * Problem  : 양꼬
 * Link     :https://school.programmers.co.kr/learn/courses/30/lessons/120830
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int solution(int n, int k) {
    int answer = 0;
    
    answer = n * 12000 + k  * 2000 - (n / 10) * 2000;
    
    return answer;
}
