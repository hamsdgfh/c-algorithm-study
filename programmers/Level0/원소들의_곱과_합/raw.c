/*
 * Platform : Programmers
 * Level    : 0
 * Problem  : 원소들의 곱과 합
 * Link     : https://school.programmers.co.kr/learn/courses/30/lessons/181929
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int x = 1;
    int y = 0;
    
    for(int i = 0 ; i < num_list_len ; i++){
        x *= num_list[i];
        y += num_list[i];
    }
    
    return (x < y * y) ? 1 : 0;
}
