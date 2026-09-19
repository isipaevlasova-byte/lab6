// Группа: Пи1-1
// Студентка: Власова Александра Евгеньевна
#include <stdio.h>
int main(void) { int h, w;
printf("Enter h and w (2..10): ");

// Для двух целых значений успешный результат scanf равен 2
if (scanf("%d %d", &h, &w) != 2) {
    printf("Input error\n");
    return 1;
}

// Проверка диапазона для обоих размеров
if (h < 2 || h > 10 || w < 2 || w > 10) {
    printf("Range error\n");
    return 1;
}

// Внешний цикл — строки от 1 до h
for (int row = 1; row <= h; row++) {
    // Внутренний цикл — столбцы от 1 до w
    for (int col = 1; col <= w; col++) {
        // Граница: первая/последняя строка ИЛИ первый/последний столбец
        if (row == 1tf("Range error\col == 1 || col == w) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");   // перевод строки: после внутреннего, внутри внешнего
}

return 0;
}
