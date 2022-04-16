// 코드업 3707번 문제 : 합의 개수
// https://codeup.kr/problem.php?id=3707
// 문제 분류 : 동적계획법

#include <stdio.h>
#include <stdint.h>

uint64_t memory[2] = { 0, 1 };

int main(void)
{
    int n;

    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        memory[1] = memory[0] * 2 + 1;
        memory[0] = memory[1];
    }
    printf("%llu\n", memory[1]);

    return 0;
}