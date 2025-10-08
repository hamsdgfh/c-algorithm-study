#include <stdio.h>
#include <string.h>

char* solution(const char* s, int n) {
    char* answer = (char*)malloc(n+1);
    
    //문자열 s로부터 n개의 글자를 문자열 answer에 복사
    
    strncpy(answer, s, n);
    answer[n] = '\0';
    return answer;
}
