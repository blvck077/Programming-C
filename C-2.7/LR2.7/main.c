#include <stdio.h>
#include <locale.h>
#include <math.h>

void print_menu() {
    system("cls");
    printf("Выберите действие, которые Вы хотите произвести:\n");
    printf("1. Конвертация валюты\n");
    printf("2. Курс валют\n");
    printf("3. Расчет прибыли от операций\n");
    printf("4. Краткая информация о банке, контакты\n");
    printf("5. Выйти\n");
    printf("> ");
}

int get_variant(int count) {
    int variant;
    scanf_s("%d", &variant, sizeof(variant));

    while (variant < 1 || variant > 5) {
        printf("Некорректный ввод. Попробуйте еще раз: ");
        scanf_s("%d", &variant, sizeof(variant));
    }

    return variant;
}

void convertation(float doll_sell, float eur_sell, float rub_sell)
{
    float summ = 0;
    printf("Введите необходимую сумму в бел. рублях для конвертации: \n");
    scanf_s("%f", &summ, sizeof(summ));
    float dollar = summ / doll_sell;
    printf("Полученный результат в долларах равен: %f\n", dollar);
    float euro = summ / eur_sell;
    printf("Полученный результат в евро равен: %f\n", euro);
    float rub = summ / rub_sell * 100;
    printf("Полученный результат в росс. рублях равен: %f\n", rub);
}

void course(float doll_buy, float doll_sell, float eur_buy, float eur_sell, float rub_buy, float rub_sell)
{
    printf("+---------------------+---------------+---------------+\n");
    printf("|         Валюта      |    Покупка    |     Продажа   |\n");
    printf("+---------------------+---------------+---------------+\n");
    printf("|      Доллар США            %.3lf           %.2lf     |\n", doll_buy, doll_sell);
    printf("+---------------------+---------------+---------------+\n");
    printf("|         Евро               %.1lf             %.3lf    |\n", eur_buy, eur_sell);
    printf("+---------------------+---------------+---------------+\n");
    printf("|     Росс. рубль            %.2lf            %.2lf     |\n", rub_buy, rub_sell);
    printf("+---------------------+---------------+---------------+\n");
}

void profit(float doll_buy, float doll_sell, float eur_buy, float eur_sell, float rub_buy, float rub_sell)
{
    int x = 0;
    float value = 0;
    printf("Выберите валюту, прибыль от которой хотите рассчитать: \n");
    printf("Доллар США - введите цифру 1\n");
    printf("Евро - введите цифру 2\n");
    printf("Российский рубль - введите цифру 3\n");
    scanf_s("%d", &x, sizeof(x));
    switch (x)
    {
    case 1:
        printf("Введите сумму в долларах США, прибыль от которой хотите рассчитать: \n");
        scanf_s("%f", &value, sizeof(value));
        float profitDollar = (value * doll_sell) - (value * doll_buy);
        printf("Прибыль в долларах равна: %f\n", profitDollar);
        break;
    case 2:
        printf("Введите сумму в евро, прибыль от которой хотите рассчитать: \n");
        scanf_s("%f", &value, sizeof(value));
        float profitEuro = (value * eur_sell) - (value * eur_buy);
        printf("Прибыль в евро равна: %f\n", profitEuro);
        break;
    case 3:
        printf("Введите сумму в российских рублях, прибыль от которой хотите рассчитать: \n");
        scanf_s("%f", &value, sizeof(value));
        float profitRub = (value * rub_sell) - (value * rub_buy);
        printf("Прибыль в российских рублях равна: %f\n", profitRub);
        break;
    }
}

void contacts()
{
    printf("Режим работы:\n");
    printf("По будням: с 8:00 до 20:00\n");
    printf("Суббота: с 9:00 до 17:00\n");
    printf("Воскресение: выходной\n\n");
    printf("Контактный телефон МТС: +375 29 729 90 90\n");
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