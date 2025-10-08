#include <stdio.h>
#include <string.h>

char* solution(const char* s, int n) {
    char* answer = (char*)malloc(n+1);
    int len = strlen(s);
    
    //원본 문자열 s의 (len - n)부터 끝까지를 answer에 복사
    
    strcpy(answer, s+(len-n));
    
    return answer;
}
