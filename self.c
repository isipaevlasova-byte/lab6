// Группа: Пи1-1
// Студентка: Власова Александра Евгеньевна
#include <stdio.h>
int main(void) {
    int h, w;
    if (scanf("%d %d", &h, &w) != 2) {
        printf("Input error\n");
        return 0;
    }
    if (h < 2 || h > 10 || w < 2 || w > 10) {
        printf("Range error\n");
        return 0;
    }
    for (int row = 1; row <= h; row++) {
        for (int col = 1; col <= w; 
            if (row == 1 || row == h || col == 1 || col == w) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
