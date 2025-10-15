#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ill은 배열 il의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s, int il[], size_t ill) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc((ill+1)*sizeof(char));
    
    for(int i=0 ; i<ill ; i++){
        answer[i] = s[il[i]];
    }
    answer[ill] = '\0';
    return answer;
}
