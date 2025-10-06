#include <stdio.h>
#include <string.h>

int main() {
    char alpha[16] = {0};
    int time = 0;
    
    scanf("%s", alpha);
    int len = strlen(alpha);

    for(int i = 0 ; i < len ; i++){
        if (alpha[i] >= 'A' && alpha[i] <= 'C') time += 3;
        else if (alpha[i] >= 'D' && alpha[i] <= 'F') time += 4;
        else if (alpha[i] >= 'G' && alpha[i] <= 'I') time += 5;
        else if (alpha[i] >= 'J' && alpha[i] <= 'L') time += 6;
        else if (alpha[i] >= 'M' && alpha[i] <= 'O') time += 7;
        else if (alpha[i] >= 'P' && alpha[i] <= 'S') time += 8;
        else if (alpha[i] >= 'T' && alpha[i] <= 'V') time += 9;
        else if (alpha[i] >= 'W' && alpha[i] <= 'Z') time += 10;
    }
    
    printf("%d", time);
    return 0;
}
