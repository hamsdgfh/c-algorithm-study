/*
 * Platform : Programmers
 * Level    : 0
 * Problem  : n보다 커질 때까지 더하기
 * Link     : https://school.programmers.co.kr/learn/courses/30/lessons/181884
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int n) {
    int sum = 0;
    for(int i = 0 ; i < numbers_len ; i++){
        sum += numbers[i];
        if (sum > n)  return sum;
    }
}
