#include <stdio.h>

int main() {
    int n, i, count = 0, arr[n];

    printf("Enter amount of elements: ");
    scanf("%d", &n);

    // цикл ввода чисел. Можно ввести их как в одну строку, так и в отдельные(через enter).
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}