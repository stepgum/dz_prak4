#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    int A, B;
    int condition;

    printf("=== ТЕЛЕВИКТОРИНА ===\n");
    printf("Введите номера кнопок игроков A и B: ");
    scanf("%d %d", &A, &B);

    condition = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);

    printf("Победа в раунде (1 - да, 0 - нет): %d\n", condition);

    return 0;
}