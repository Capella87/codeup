// 코드업 3704번 문제 : 계단 오르기 2
// https://codeup.kr/problem.php?id=3704
// 문제 분류 : 동적계획법, 재귀함수

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    uint64_t* arr = (uint64_t*)malloc(sizeof(uint64_t) * n);
    if (n >= 1) arr[0] = 1;
    if (n >= 2) arr[1] = 2;
    if (n >= 3) arr[2] = 4;

    for (int i = 3; i < n; i++)
    {
        arr[i] = arr[i - 1] % 1000 + arr[i - 2] % 1000 + arr[i - 3] % 1000;
        arr[i] %= 1000;
    }
    printf("%llu\n", arr[n - 1]);

    free(arr);
    return 0;
}