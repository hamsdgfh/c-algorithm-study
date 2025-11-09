#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int a[], int n) {
    int tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int* solution(const char* s) {
    int len = strlen(s);
    int nums[100];
    int count = 0;
    
    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            nums[count++] = s[i] - '0';
        }
    }
    
    bubble_sort(nums, count);
    
    int* answer = (int*)malloc(sizeof(int) * count);
    
    for (int i = 0; i < count; i++) {
        answer[i] = nums[i];
    }
    
    return answer;
}
