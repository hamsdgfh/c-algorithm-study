/*
 * Platform : BOJ (백준)
 * Problem  : 25206
 * Tier     : Silver V
 * Link     : https://www.acmicpc.net/problem/25206
 * Idea     : 길이 → 사전순 정렬
 * Complex. : O(n log n)
 * Note     : 중복 제거
 */

#include <stdio.h>
#include <string.h>

int main() {
    char sub[51] = {0};
    double credit = 0; //학점
    char grade[3] = {0};
    double total_score = 0.0; //전공평점
    double total_credit = 0.0; //계산에 포함된 학점

    for(int i = 0 ; i < 20 ; i++){
        scanf("%s %lf %s", sub, &credit, grade);

        double point = 0.0; // 과목 평점
        
    if (!strcmp(grade, "A+")) point = 4.5;
        else if (!strcmp(grade, "A0")) point = 4.0;
        else if (!strcmp(grade, "B+")) point = 3.5;
        else if (!strcmp(grade, "B0")) point = 3.0;
        else if (!strcmp(grade, "C+")) point = 2.5;
        else if (!strcmp(grade, "C0")) point = 2.0;
        else if (!strcmp(grade, "D+")) point = 1.5;
        else if (!strcmp(grade, "D0")) point = 1.0;
        else if (!strcmp(grade, "F")) point = 0.0;
        else if (!strcmp(grade, "P")) continue;

        total_score += credit * point;
        total_credit += credit;
    }
    printf("%.6f\n", total_score / total_credit);
    return 0;
}
