#include <stdio.h>
#include <locale.h>

float area_triangle(float a, float b);
void define_triangle();
void sraw_triangle(int a, int b, char simbol);

int main() {
	setlocale(LC_ALL, ".UTF8");
	int c, ia, ib;
	float a, b;
	char simbol;
	printf("Меню выбора операции с прямоугольным треугольником\n");
	printf("1 - Расчитать площадь\n");
	printf("2 - Вывести определение фигуры\n");
	printf("3 - Нарисовать фигуру\n");
	printf("Ваш выбор: \n");
	scanf_s("%d", &c);
	switch (c) {

	case 1:
		printf("Введите катeты a u b: ");
		scanf_s("%f", &a);
		scanf_s("%f", &b);
		printf("S = %.2f\n", area_triangle(a, b));
		break;

	case 2:
		define_triangle();
		break;

	case 3:
		printf("Введите катeты a u b: ");
		scanf_s("%d", &ia);
		scanf_s("%d", &ib);
		printf("Введите символ для рисования: ");
		scanf_s("%c", &simbol);
		sraw_triangle(ia, ib, simbol);
		break;
	}
}

float area_triangle(float a, float b) {
	return 0.5f * a * b;
}
void define_triangle() {
	printf("Прямоугольный треугольник — это треугольник, в котором один из углов прямой, то есть равен 90°.\n");
}
void sraw_triangle(int a, int b, char simbol) {
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			if(j <= (a - 1 - i)){
			}
		}
	}

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", simbol);
		}
		printf("\n");
	}
}
