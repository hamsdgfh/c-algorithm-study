#include <stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
     
    for (int i = 1 ; i <=  t ; i++){
        int sum = 0;
        int p = 0;
        for (int T = 0 ; T < 10 ; T++){
            scanf("%d", &p);
            if (p % 2 != 0)
                sum += p;
        }
        printf("%d %d\n", i, sum);
    }
    return 0;
}
