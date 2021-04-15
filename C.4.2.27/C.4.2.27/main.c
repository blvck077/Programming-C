#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

float strToFloat(const char string[])
{
    int i;
    int j = 0;
    double ten = 0;
    double dec = 0;
    double result = 0;

    for (i = 0; string[i] != '\0'; ++i)
    {
        if (string[i] == '-') continue;

        if (string[i] == '.' && string[i + 1] != '\0')
        {
            for (j = i + 1; string[j] != '\0'; ++j)
            {
                dec = (dec * 10) + (string[j] - '0');

                ten = j - i;
            }
            break;
        }
        else
        {
            result = (result * 10) + (string[i] - '0');

        }
    }
    double denominator = pow(10, (double)ten);
    double temp = result * denominator;
    temp += dec;
    result = temp / denominator;
    if (string[0] == '-') result *= -1;
    return result;
}

int main() {

	FILE* file;
    FILE* file1;
	char arr[N];
    char arra[N];
	int i = 0;
    int j = 0;

	file = fopen("file.txt", "r");
    file1 = fopen("file1.txt", "r");

    while ((arr[i] = fgetc(file)) != EOF) {
        if (arr[i] == '\n') {
            arr[i] = '\0';
            printf("%s\n", arr);
            i = 0;
        }
        else i++;
    }
    printf("A = ");
    arr[i] = '\0';
    printf("%s\n", arr);

    while ((arra[j] = fgetc(file1)) != EOF) {
        if (arra[j] == '\n') {
            arra[j] = '\0';
            printf("%s\n", arra);
            j = 0;
        }
        else j++;
    }
    printf("B = ");
    arra[j] = '\0';
    printf("%s\n", arra);

    double A = strToFloat(arr);
    double B = strToFloat(arra);
    double C = A + B;

    printf("The summ of A + B is ");
    printf("%.1f\n", C);

}