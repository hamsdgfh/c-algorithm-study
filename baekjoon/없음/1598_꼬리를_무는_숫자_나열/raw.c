#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,m;
    int answer;
    scanf("%d%d", &n, &m);

    n--;
    m--;

    answer = abs(n % 4 - m % 4) + abs(n / 4 - m /4);
    printf("%d", answer);
    
    return 0;
}
