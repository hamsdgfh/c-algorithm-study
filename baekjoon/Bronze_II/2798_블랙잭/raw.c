#include <stdio.h>

int main() {
    int n, m;
    int card[100];

    scanf("%d %d", &n, &m);

    for(int x=0 ; x<n ; x++){
        scanf("%d", &card[x]);
    }

    int best = 0;

    for(int i=0 ; i<n-2 ; i++){
        for(int j=i+1 ; j<n-1 ; j++){
            for(int k=j+1 ; k<n ; k++){
                int sum = card[i] + card[j] + card[k];
                if(sum<=m && sum>best){
                    best = sum;
                }
            }
        }
    }
    printf("%d", best);

    return 0;
}
