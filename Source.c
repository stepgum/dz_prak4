#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int A, B;
    int condition;

    setlocale(LC_ALL, "Russian");

    printf("Введите номер кнопки игрока A: ");
    scanf("%d", &A);
    printf("Введите номер кнопки игрока B: ");
    scanf("%d", &B);

    // Победа, если ровно один из номеров чётный
    condition = (A % 2) != (B % 2);

    printf("Победа в раунде (1 - да, 0 - нет): %d\n", condition);

    system("pause");
    return 0;
}
