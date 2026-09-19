// Группа: Пи1-1
// Студентка: Власова Александра Евгеньевна
// Назначение: Цикл for и вложенный цикл
#include <stdio.h>
int main(void) { int h, w;
if (scanf("%d %d", &h, &w) != 2)
{
    printf("Input error");
    return 0;
}

if (h < 2 || h > 10 || w < 2 || w > 10)
{
    printf("Range error");
    return 0;
}

for (int i = 1; i <= h; i++)
{
    for (int j = 1; j <= w; j++)
    {
        if (i == 1 2 || w > 10)
j == 1 || j == w)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }

    printf("\n");
}

return 0;
}
