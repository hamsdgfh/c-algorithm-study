#include <stdio.h>

// r은 2차원 배열 b의 행 길이, c는 2차원 배열 b의 열 길이입니다.
int solution(int** b, size_t r, size_t c, int k) {
    int answer = 0;
    
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(i+j <= k) answer += b[i][j];
        }
    }
    return answer;
}
