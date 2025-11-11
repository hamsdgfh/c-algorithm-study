#include <stdio.h>
#include <string.h>

int palindrome(char* s){
    int len = strlen(s)/2;

    for(int i = 0 ; i < len ; i++){
        if(s[i] != s[strlen(s) - 1 - i]){
            return 0;
        }
    }
    return 1;
}

//오리지널 문자열을 뒤집어서, 동일한 문자열이면 1 아니면 0을 반환
int palindrome2(char* s){
    int n = strlen(s);
    char* s2 = (char*)malloc(n+1);    //heap 영역에 저장 : 반드시 내가 메모리 해제

    for(int i=0 ; i<n ; i++){
        //s[i]를 s2[n-i-1]로 카피
        s2[n-i-1] = s[i];
    }
    s2[n] = '\0';

    int result = (strcmp(s,s2) == 0);

    free(s2);
    return result;
}

int main() {
    char word[21] = "";

    scanf("%s", word);

    if(palindrome(word)==1) printf("true");
    else printf("false");

    return 0;
}
