#include <stdio.h>

int main() {
    int n; //행의 개수
    int m; //열의 개수
    int a[100][100] = {0};
    int b[100][100] = {0};
    int c[100][100] = {0};

    scanf("%d%d", &n, &m);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//VAL 방법
#include <stdio.h>

int main() {
    int n; //행의 개수
    int m; //열의 개수

    scanf("%d%d", &n, &m);
    int a[n][m];
    int b[n][m];
    int c[n][m];
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
