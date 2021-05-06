// 코드업 1920번 문제 : (재귀함수) 2진수 변환
// https://codeup.kr/problem.php?id=1920

#include <stdio.h>

void getBinary(int n)
{
    if (n > 1)
        getBinary(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    getBinary(n);
    putchar('\n');

    return 0;
}