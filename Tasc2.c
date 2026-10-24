#include <stdio.h>
#include <locale.h>
#include <math.h>
//способ 2
double sin_n(double x, int N) {
	double sum = 0.0;
	double term = x;
	for (int k = 1; k <= N; k++) {
		sum += term;
		term *= -x * x / ((2 * k) * (2 * k + 1));
	}
	return sum;
}

double sin_eps(double x, double eps) {
	double sum = 0.0;
	double term = x;
	int k = 1;
	while (fabs(term) >= eps) {
		sum += term;
		term *= -x * x / ((2 * k) * (2 * k + 1));
		k++;
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, ".UTF8");
	double x, eps;
	int N;
	printf("Введите значения х:\n");
	scanf_s("%lf\n", &x);

	printf("Введите количество членов ряда N:\n");
	scanf_s("%d\n", &N);

	printf("Ведите точность вычисления eps:\n");
	scanf_s("%lf\n", &eps);

	double res_math = sin(x);
	double res_n = sin_n(x, N);
	double res_eps = sin_eps(x, eps);

	printf("Стандартная функция: %.15f\n", res_math);
	printf("Через N челенов ряда: %.15f (отклонение: %e) \n", res_n, fabs(res_math - res_n));
	printf("С точностью eps: %.15f (отклонение: %e)\n", res_eps, fabs(res_math - res_eps));
	return 0;
	system("pause");
}
 