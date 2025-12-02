#include <stdio.h>
#include <string.h>

int main() {
    char word[1001];

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int n = strlen(word);
    
    for(int i=0 ; i<n ; i++){
        char temp = word[i];
        
        if(word[i] == 'A') temp = 'X';
        else if(word[i] == 'B') temp = 'Y';
        else if(word[i] == 'C') temp = 'Z';
        else temp = word[i] - 3;
        
        printf("%c", temp);
    }
    return 0;
}
