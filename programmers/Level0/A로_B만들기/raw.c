#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    char ch1 = *(char *)a;
    char ch2 = *(char *)b;
    
    if (ch1 < ch2) return -1;
    if (ch1 > ch2) return 1;
    return 0; 
}

int solution(const char* before, const char* after) {
    int len = strlen(before);
    
    char *b = malloc(len + 1);
    char *a = malloc(len + 1);
    
    strcpy(b, before);
    strcpy(a, after);

    qsort(b, len, sizeof(char), cmp);
    qsort(a, len, sizeof(char), cmp);

    int answer = (strcmp(b, a) == 0) ? 1 : 0;
    
    return answer;
}
