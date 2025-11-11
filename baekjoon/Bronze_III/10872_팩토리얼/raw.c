#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    scanf("%d", &n);

    if(n==0) printf("1");
    else{
        for(int i=1 ; i<=n ; i++){
        fact *= i;
    }
    printf("%d", fact);
    }

    return 0;
}
