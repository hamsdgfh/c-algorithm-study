#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN_INPUT 21

int main(void) {
    char s1[LEN_INPUT];
    int n = 0;
    
    scanf("%s", s1);
    n = strlen(s1);
    
    for (int i=0 ; i<n ; i++){
        if(islower(s1[i])) s1[i] = toupper(s1[i]);
        else s1[i] = tolower(s1[i]);
    }
    printf("%s", s1);
    
    return 0;
}
