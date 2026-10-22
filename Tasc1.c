#include <stdio.h>
#include <locale.h>
#include <math.h>

double fa(double x) {
	double y;
	if (x <= 3) {
		y = x * x - 3 * x + 9;
	}
	else
	{
		y = 1 / (x * x * x + 3);
	}
	return y;
}

double fb(double x) {
	double u;
	u = x * exp(sin(x * x));
	return u;
}

int main() {
	setlocale(LC_ALL, ".UTF8");
	double x;
	int v;
	printf("Выберите действие а затем число х:\n");
	printf("1 - Расчет fa(x)\n");
	printf("2 - Расчет fb(x)\n");
	printf("3 - Произведение функций\n");
	printf("4 - Разность квадратов функций\n");
	printf("5 - Удвоенная сумма функций\n");
	scanf_s("%d", &v);
	scanf_s("%lf", &x);
	switch (v) {
	case 1:
		printf("fa(x)=%lf", fa(x));
		break;

	case 2:
		printf("fb(x)=%lf", fb(x));
		break;
	
	case 3:
		printf("%lf - произведение\n", fa(x) * fb(x));
		break;
	case 4:
		printf("%lf - разность квадратов\n",fa(x) * fa(x) - fb(x) * fb(x));
		break;
	case 5:
		printf("%lf - удвоенная сумма\n",2 * (fa(x) + fb(x)));
		break;
	}

	return 0;
}
