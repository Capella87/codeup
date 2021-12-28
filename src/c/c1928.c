// 코드업 1928번 문제 : (재귀함수) 우박수 (3n+1) (basic)
// https://codeup.kr/problem.php?id=1928
// 문제 분류 : 재귀함수

#include <stdio.h>

void getCollatz(int n)
{
    printf("%d\n", n);
    if (n % 2 && n != 1)
        getCollatz(3 * n + 1);
    else if (n % 2 == 0)
        getCollatz(n / 2);
    
}

int main(void)
{
    int n;

    scanf("%d", &n);
    getCollatz(n);
}
