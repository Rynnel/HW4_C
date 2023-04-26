#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, binary_num[100], i=0;
    printf("Enter number: ");
    scanf("%d", &number);

    // если число меньше 0, то приписываем -
    if (number < 0) {
        printf("Binary: -");
    }
    else {
        printf("Binary: ");
    }
    // цикл вычисления двоичной записи числа
    while(abs(number) > 0) {
        binary_num[i] = abs(number) % 2;
        number /= 2;
        i++;
    }

    // процесс посимвольной записи двоичного числа
    for(int j=i-1; j>=0; j--) {
        printf("%d", binary_num[j]);

    }

   return 0;
}