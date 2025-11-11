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

int main() {
    char word[21] = "";

    scanf("%s", word);

    if(palindrome(word)==1) printf("true");
    else printf("false");

    return 0;
}
