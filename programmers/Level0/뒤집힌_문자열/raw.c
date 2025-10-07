#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int n = strlen(s);
    char* answer = (char*)malloc(n+1); //중요 널문자를 포함하기위해 +1
    
    for(int i = 0 ; i < n ; i++){
        answer[n-1-i] = s[i]; 
    }
    //주의 : 문자열의 마지막 글자는 반드시 널문자
    answer[n] = '\0';
    
    return answer;
}
