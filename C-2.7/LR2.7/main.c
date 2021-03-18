#include <stdio.h>
#include <locale.h>
#include <math.h>

void print_menu() {
    system("cls");
    printf("�������� ��������, ������� �� ������ ����������:\n");
    printf("1. ����������� ������\n");
    printf("2. ���� �����\n");
    printf("3. ������ ������� �� ��������\n");
    printf("4. ������� ���������� � �����, ��������\n");
    printf("5. �����\n");
    printf("> ");
}

int get_variant(int count) {
    int variant;
    scanf_s("%d", &variant, sizeof(variant));

    while (variant < 1 || variant > 5) {
        printf("������������ ����. ���������� ��� ���: ");
        scanf_s("%d", &variant, sizeof(variant));
    }

    return variant;
}

void convertation(float doll_sell, float eur_sell, float rub_sell)
{
    float summ = 0;
    printf("������� ����������� ����� � ���. ������ ��� �����������: \n");
    scanf_s("%f", &summ, sizeof(summ));
    float dollar = summ / doll_sell;
    printf("���������� ��������� � �������� �����: %f\n", dollar);
    float euro = summ / eur_sell;
    printf("���������� ��������� � ���� �����: %f\n", euro);
    float rub = summ / rub_sell * 100;
    printf("���������� ��������� � ����. ������ �����: %f\n", rub);
}

void course(float doll_buy, float doll_sell, float eur_buy, float eur_sell, float rub_buy, float rub_sell)
{
    printf("+---------------------+---------------+---------------+\n");
    printf("|         ������      |    �������    |     �������   |\n");
    printf("+---------------------+---------------+---------------+\n");
    printf("|      ������ ���            %.3lf           %.2lf     |\n", doll_buy, doll_sell);
    printf("+---------------------+---------------+---------------+\n");
    printf("|         ����               %.1lf             %.3lf    |\n", eur_buy, eur_sell);
    printf("+---------------------+---------------+---------------+\n");
    printf("|     ����. �����            %.2lf            %.2lf     |\n", rub_buy, rub_sell);
    printf("+---------------------+---------------+---------------+\n");
}

void profit(float doll_buy, float doll_sell, float eur_buy, float eur_sell, float rub_buy, float rub_sell)
{
    int x = 0;
    float value = 0;
    printf("�������� ������, ������� �� ������� ������ ����������: \n");
    printf("������ ��� - ������� ����� 1\n");
    printf("���� - ������� ����� 2\n");
    printf("���������� ����� - ������� ����� 3\n");
    scanf_s("%d", &x, sizeof(x));
    switch (x)
    {
    case 1:
        printf("������� ����� � �������� ���, ������� �� ������� ������ ����������: \n");
        scanf_s("%f", &value, sizeof(value));
        float profitDollar = (value * doll_sell) - (value * doll_buy);
        printf("������� � �������� �����: %f\n", profitDollar);
        break;
    case 2:
        printf("������� ����� � ����, ������� �� ������� ������ ����������: \n");
        scanf_s("%f", &value, sizeof(value));
        float profitEuro = (value * eur_sell) - (value * eur_buy);
        printf("������� � ���� �����: %f\n", profitEuro);
        break;
    case 3:
        printf("������� ����� � ���������� ������, ������� �� ������� ������ ����������: \n");
        scanf_s("%f", &value, sizeof(value));
        float profitRub = (value * rub_sell) - (value * rub_buy);
        printf("������� � ���������� ������ �����: %f\n", profitRub);
        break;
    }
}

void contacts()
{
    printf("����� ������:\n");
    printf("�� ������: � 8:00 �� 20:00\n");
    printf("�������: � 9:00 �� 17:00\n");
    printf("�����������: ��������\n\n");
    printf("���������� ������� ���: +375 29 729 90 90\n");
}

int main()
{
    int variant;
    float summ = 0;
    float doll_buy = 2.595;
    float doll_sell = 2.63;
    float eur_buy = 3.1;
    float eur_sell = 3.135;
    float rub_buy = 3.45;
    float rub_sell = 3.57;
    setlocale(LC_ALL, "Russian");

    do
    {
        print_menu();
        variant = get_variant(5);

        switch (variant)
        {
        case 1:
            convertation(doll_sell, eur_sell, rub_sell);
            break;
        case 2:
            course(doll_buy, doll_sell, eur_buy, eur_sell, rub_buy, rub_sell);
            break;
        case 3:
            profit(doll_buy, doll_sell, eur_buy, eur_sell, rub_buy, rub_sell);
            break;
        case 4:
            contacts();
            break;
        }
        if (variant != 5)
            system("pause");
    } while (variant != 5);
    return 0;
}