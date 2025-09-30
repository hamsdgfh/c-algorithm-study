#include <stdio.h>
#include <stdlib.h> // malloc() 사용을 위해 필요

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // 크기가 2인 int형 배열 answer를 동적 할당(메모리 영역 중 힙에 저장)
    
    int *answer;
    answer = (int *)malloc(8); // malloc안에는 필요한 바이트 수 작성 / (int *)로 4바이트 씩 사용하도록 나눔
    answer[0] = money / 5500;
    answer[1] = money % 5500;
    
    return answer;
}
