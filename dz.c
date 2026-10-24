#include <stdio.h>
#include <locale.h>

int S1(int a) {
    int s1;
    s1 = a * a;
    return s1;

}



int S2(int b) {
    int s2;
    s2 = b * b;
    return s2;

}
int sravna(int a, int b) {
    int sravn;
    if ((a * a) > (b * b)) {
        sravn = a * a - b * b;
    }
    else
    {
        sravn = b * b - a * a;
    }

    return sravn;
}

int main() {
    setlocale(LC_ALL, ".UTF8");
    int a, b;
    char symbol;
    char choice;

    do {
        printf("Введите размер стороны квадрата 1: ");
        scanf_s("%d", &a);

        printf("Введите размер стороны квадрата 2: ");
        scanf_s("%d", &b);

        printf("Введите символ: ");

        scanf_s(" %c", &symbol);

        printf("\n");

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (i == 0 || i == a - 1 || j == 0 || j == a - 1) {
                    printf("%c ", symbol);
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
            printf("\n");
        }
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < b; j++) {
                if (i == 0 || i == b - 1 || j == 0 || j == b - 1) {
                    printf("%c ", symbol);
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");

        }
        printf("Площадь фигуры 1 = %d\n", S1(a));
        printf("Площадь фигуры 2 = %d\n", S2(b));
        printf("Pазница между двумя фигурамии = %d", sravna(a,b));
        printf("Квадрат — это геометрическая фигура: правильный четырёхугольник, у которого все стороны равны и все углы прямые (равны 90°).\n");
        printf("\nХотите продолжить? (Да - введите 1, Нет - введите 0): ");
        scanf_s(" %c", &choice);
        getchar();

    } while (choice == '1');

    printf("Программа завершена.\n");
    return 0;

}
