#include <stdio.h>

// r는 2차원 배열 a의 행 길이, c는 2차원 배열 a의 열 길이입니다.
int solution(int** a, size_t r, size_t c) {
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(a[i][j] != a[j][i]) return 0;
        }
    }
    return 1;
}
