#include <stdio.h>

int main() {
    int a, m = 1, k;

    printf("Enter 1st days pos: ");
    scanf("%d", &a);

    printf("Enter amount of days: ");
    scanf("%d", &k);

    // делаем по отступы в первой строке
    for (int i = 1; i < a; i++) {
        printf("   ");
    }

    // цикл, выводящий числа от 1 до k
    for (int j = 1; j <= k; j++) {
        printf("%2d ", j); // %2d добавляет по пробелу, если число занимает меньше двух символов (нужно для сохранения вида)

        // если введен седьмой по счету символ, то переходим на новую строку
        if ((j + a - 1) % 7 == 0 || j == k) { 
            printf("\n");
        }
    }

    return 0;

}