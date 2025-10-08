#include <stdio.h>
#include <string.h>

int solution(const char* s, const char* prefix) {
    int n = strlen(prefix);
    
    return strncmp(s, prefix, n) == 0 ? 1 : 0;
}
