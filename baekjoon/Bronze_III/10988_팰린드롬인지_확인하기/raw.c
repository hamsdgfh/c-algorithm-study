/*
 * Platform : BOJ (백준)
 * Problem  : 
 * Tier     : 
 * Link     : https://www.acmicpc.net/problem/10988
 * Idea     : 
 * Complex. : 
 * Note     : 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char word[101] = "";

    scanf("%s", word);
    int len = strlen(word)/2;

    for(int i = 0 ; i < len ; i++){
        if(word[i] != word[strlen(word) - 1 - i]){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}
