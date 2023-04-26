#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter month number: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    // проверка високосный год или нет. Нужно для определения кол-ва дней в феврале
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            days = 29;
        } 
        else {
            days = 28;
        }
    }

    // добавлены условия до/после августа, т.к в июле и в августе по 31 дню, несмотря на то, что они соседствуют
    // вообще, можно было сделать условие если month == {4, 6, 9, 11}, то days = 30, но я решил сделать побольше условий

    // четные месяцы до августа, кроме февраля
    else if (month % 2 == 0 && month < 8 && month != 2) {
        days = 30;
    }
    // четные месяцы после августа(включительно)
    else if (month % 2 == 0 && month >= 8) {
        days = 31;
    }
    // нечетные месяцы до августа
    else if (month < 8) {
        days = 31;
    }
    // нечетные месяцы после августа
    else {
        days = 30;
    }
    // если номер месяца меньше 0 или больше 12, то этого месяца попросту нет..
    if (month > 12 || month < 0) {
        printf("%s", "Error! You entered invalid month..");
        return 0;
    }
    printf("%d", days);
    return 0;
}