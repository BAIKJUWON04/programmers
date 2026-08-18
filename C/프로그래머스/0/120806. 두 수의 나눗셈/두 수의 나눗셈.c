#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    float tmp;
    tmp = 0;
    tmp = (float)num1 / num2;
    answer = tmp *1000;
    return answer;
}