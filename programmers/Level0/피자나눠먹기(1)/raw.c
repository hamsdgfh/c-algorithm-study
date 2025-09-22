/*
 * Platform : Programmers
 * Level    : 0
 * Problem  : 피자나눠먹기(1)
 * Link     : https://school.programmers.co.kr/learn/courses/30/lessons/42586
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

int solution(int n) {
    int q = n / 7;
    int r = n % 7;
    
    return (r == 0) ? q : q + 1;
}
