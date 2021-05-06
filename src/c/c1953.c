// 코드업 1953번 문제 : (재귀함수) 삼각형 출력하기 1
// https://codeup.kr/problem.php?id=1953

#include <stdio.h>

void printAsterisk(int n)
{
    if (n > 1) printAsterisk(n - 1);
    putchar('*');
}

void getTriangle(int n)
{
    if (n > 1) getTriangle(n - 1);
    printAsterisk(n);
    putchar('\n');
}

int main(void)
{
    int n;

    scanf("%d", &n);
    getTriangle(n);

    return 0;
}