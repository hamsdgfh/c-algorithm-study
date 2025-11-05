#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int age;
    char name[101];
} user;

int cmp(const void* a, const void* b){
    user* ua = (user*)a;
    user* ub = (user*)b;
    return ua->age - ub->age;
}

int main(){
    int n;
    //user list[100000];  //10만이 백준에서는 작동하지만, mycompiler에서 작동하지 않음
    user* list = (user*)malloc(100000 * sizeof(user));

    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        scanf("%d %s", &list[i].age, list[i].name);
    }
    qsort(list, n, sizeof(user), cmp);

    for(int i=0; i<n ; i++){
        printf("%d %s\n", list[i].age, list[i].name);
    }
    return 0;
}
