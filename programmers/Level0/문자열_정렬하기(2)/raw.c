#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void bubble_sort(char a[], int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++ ){
            if(a[j] > a[j+1]) {     
                char tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int n = strlen(s);
    char* s2 = (char*)malloc(n+1);
    strcpy(s2, s);
    
    for(int i=0 ; i<n ; i++){
        if(isupper(s2[i])) s2[i] = tolower(s2[i]);
    }
    
    bubble_sort(s2,n);
    
    return s2;
}
