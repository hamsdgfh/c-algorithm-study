/*
 * Platform : Programmers
 * Level    : 0
 * Problem  : 머쓱이보다 키 큰 사람
 * Link     : https://school.programmers.co.kr/learn/courses/30/lessons/120585
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

// len은 배열 array의 길이입니다.
int solution(int array[], size_t len, int height) {
    int count = 0;
    
    for (int i = 0 ; i < len ; i++){
        count += (array[i] > height);
    }
    return count;
}
