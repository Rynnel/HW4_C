#include <stdio.h>

int main() {
    int n, count=-1;
    float sum=0, res;

    // ввод числа n до тех пор, пока пользователь не введет 0. 
    while (n != 0) {
        printf("Enter num: ");
        scanf("%d", &n);
        count++;
        sum = sum+n;
    }

    res = sum/count; // среднее арифметическое число. Сумма, полученная в цикле ввода n, деленная на количество чисел.

    printf("%f", res);
}