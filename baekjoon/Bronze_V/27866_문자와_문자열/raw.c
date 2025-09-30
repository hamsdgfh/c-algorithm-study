#include <stdio.h>

int main() {
    char word[1001] = "";
    int i = 0;

    scanf("%s", word);
    scanf("%d", &i);

    printf("%c", word[i-1]);

    return 0;
}
