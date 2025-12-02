#include <stdio.h>
#include <string.h>

int pali(char* s){
    int n = strlen(s);
    for(int i=0 ; i<n/2 ; i++){
        if(tolower(s[i]) != tolower(s[n-1-i])) return 0; //tolower 함수는 알파벳 대문자만 소문자로 바꿈
    }
    return 1;
}
int main() {
    int n;
    char line[19] = "";

    scanf("%d", &n);
    getchar(); //숫자 다음의 개행문자를 읽어서 날림
    
    for(int i=0 ; i<n ; i++){
        scanf("%[^\n]", line); //개행문자 직전까지 읽음
        getchar(); //각 줄의 마지막에 있는 개행문자를 읽어서 날림
        if(pali(line) == 1) printf("Yes\n");
        else printf("NO\n");
    }
    return 0;
}
