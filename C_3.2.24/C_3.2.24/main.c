#include <stdio.h>
#include <math.h>

#define M 5
#define N 5

int main()
{
    int matrix[M][N], i = -1, j, value = 1, center = M * N;
    int left = -1, right = N - 1, top = 0, bottom = M - 1;

    while (left <= right && top <= bottom)
    {
        for (j = ++left; j <= right && value <= center; j++)     matrix[i + 1][j] = value++;
        for (i = ++top; i <= bottom && value <= center; i++)     matrix[i][j - 1] = value++;
        for (j = --right; j >= left && value <= center; j--)     matrix[i - 1][j] = value++;
        for (i = --bottom; i >= top && value <= center; i--)     matrix[i][j + 1] = value++;
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", matrix[i][j]);
        printf("\n");
    }

    return 0;
}