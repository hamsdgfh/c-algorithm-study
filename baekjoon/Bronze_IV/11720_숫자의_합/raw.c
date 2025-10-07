#include <stdio.h>

int main() {
    int Nnum;
    char N[101] = {0};
    int sum = 0;
    
    scanf("%d", &Nnum);
    scanf("%s", N);

    for (int i = 0; i < Nnum ; i++){
        sum += N[i] - '0';
    }
    printf("%d", sum);

    return 0;
}
