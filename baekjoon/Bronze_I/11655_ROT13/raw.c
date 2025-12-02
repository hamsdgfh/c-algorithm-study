#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char msg[1001] = "";
    int n;

    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';
    
    n = strlen(msg);

    for(int i=0; i<n; i++){
        if('a' <= msg[i] && msg[i] <= 'm') msg[i] += 13;
        else if('n' <= msg[i] && msg[i] <= 'z') msg[i] -= 13;
        else if('A' <= msg[i] && msg[i] <= 'M') msg[i] += 13;
        else if('N' <= msg[i] && msg[i] <= 'Z') msg[i] -= 13;
    }
    printf("%s", msg);
    return 0;
}
