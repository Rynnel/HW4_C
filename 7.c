#include <stdio.h>

int main() {
    int n, neg=0, pos=0, zero=0, num;

    printf("Enter amount of numbers: ");
    scanf("%d", &n);

    // цикл ввода n количества чисел. Если число равно 0, то прибавляем 1 к zero. Если больше нуля, то pos+1. Если меньше нуля, то neg+1
    // Переменные zero, pos, neg используются в качестве счётчиков
    for (int i=0; i<n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            zero++;
        }
        else if (num > 0)
        {
            pos++;
        }
        else {
            neg++;
        }
        
    }

    printf("%d %d %d", zero, pos, neg);
    return 0;
}