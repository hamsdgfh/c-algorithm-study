#include <stdio.h>

// len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t len, int n) {
    int sum = 0;
    for(int i = 0 ; i < len && sum <= n ; i++){
        sum += numbers[i];
    }
    return sum;
}
