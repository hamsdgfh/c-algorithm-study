#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 1 ; t <= T ; t++){
        char word[1000] = "";
        scanf("%s", word);
        int n = strlen(word);
        printf("%c%c\n", word[0], word[n-1]);
    }

    return 0;
}
