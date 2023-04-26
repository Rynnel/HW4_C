#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[15];
    int i, lower = 0, upper = 0, digit = 0, other = 0;

    printf("Enter password: ");
    scanf("%s", password);

    // проверка длины пароля
    if (strlen(password) < 8 || strlen(password) > 14) {
        printf("Error! Your password has less than 8 symbols or more than 14.\n");
        return 0;
    }
    // проверка символов пароля
    for (i = 0; i < strlen(password); i++) {
        if (password[i] < 33 || password[i] > 126) {
            printf("Error! Your password must consist of only ASCII symbols(33-126)\n");
            return 0;
        }
    // проверка наличия маленьких, заглавных, цифр, других символов
        if (islower(password[i])) {
            lower = 1;
        } else if (isupper(password[i])) {
            upper = 1;
        } else if (isdigit(password[i])) {
            digit = 1;
        } else {
            other = 1;
        }
    }

    int res=lower+upper+digit+other;
    // проверка наличия сразу трех классов символов
    if (res < 3) {
        printf("Error! Your password has less than 3 classes(Upper symbols, lower symbols, digits, other symbols like !;'..)\n");
        return 0;
    }

    printf("Your password matches requirements!\n");

    return 0;
}