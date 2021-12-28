// 코드업 1930번 문제 : SuperSum
// https://codeup.kr/problem.php?id=1930
// 문제 분류 : 재귀함수, 관리자 추천 문제

#include <stdio.h>
#include <stdlib.h>

int saved[15][15] = { 0, };

int main(void)
{
    int k, n;

    for (int i = 1; i <= 14; i++) saved[0][i] = i;
    for (int i = 1; i <= 14; i++)
    {
        saved[i][1] = saved[i - 1][1];
        for (int j = 2; j <= 14; j++)
            saved[i][j] = saved[i][j - 1] + saved[i - 1][j];
    }
    while (scanf("%d %d", &k, &n) != EOF)
        printf("%d\n", saved[k][n]);

    return 0;
}