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

========================================
#include <stdio.h>

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", factorial(n));
    
    return 0;
}
