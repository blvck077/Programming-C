#include <stdio.h>
#include <locale.h>
#include <math.h>


int funfun(int k)
{
    int length = 3;

    int newNumber = 100 + (k - 1) / 3;
    int remainder = (k - 1) % 3;


    int answer = getNthDigit(newNumber, abs(remainder - 2));
    return answer;
}

int getNthDigit(int number, int place)
{
    int result = 0;
    for (int i = 0; i <= place; i++)
    {
        result = number % 10;
        number = number / 10;
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Задана последовательность чисел: 100101102103104105106...\n");
    int k = 0;
    char array[100];

    do
    {
        printf("Введите число k: \n");
        scanf_s("%s", &array, sizeof(array));
        k = atoi(array);
    } while (k <= 0);

    int answer = funfun(k);
    printf("%d", answer);

    return 0;
}