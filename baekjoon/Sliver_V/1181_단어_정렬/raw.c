#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int cmp(const void* a, const void* b){
    char* x = (char*)a;
    char* y = (char*)b;
    if(strlen(x) < strlen(y)) return -1;
    if(strlen(x) > strlen(y)) return 1;

    return strcmp(x,y);
}

int main() {
    int n;
    char word[20000][51];

    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        scanf("%s", word[i]);
    }
    qsort(word, n, sizeof(word[0]), cmp);

    for(int i=1 ; i<n ; i++){
        if(strcmp(word[i-1], word[i]) != 0)
        printf("%s\n", word[i]);
    } 
    return 0;
}
