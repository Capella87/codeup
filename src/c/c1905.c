// 코드업 1905번 문제 : (재귀함수) 1부터 n까지 합 구하기
// https://codeup.kr/problem.php?id=1905
// 문제 분류 : 재귀함수, 관계기반 설계

#include <stdio.h>

int getTotal(int n)
{
    if (n == 1)
        return n;
    return n + getTotal(n - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", getTotal(n));

    return 0;
}