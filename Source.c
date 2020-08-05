#include <stdio.h>
#include <locale.h>

int main() {
	float x, y, z;
	setlocale(LC_ALL, "Russian");
	printf("Введите число x: ");
	scanf_s("%f", &x);
	printf("Введите число y: ");
	scanf_s("%f", &y);
	x = x * x;
	y = y * y;
	z = x + y;
	printf("Сумма этих чисел равна %.2f\n", z);
	z = x - y;
	printf("Разность этих чисел равна %.2f\n", z);
	z = x * y;
	printf("Произедение этих чисел равна %.2f\n", z);
	z = x / y;
	printf("Частное этих чисел равна %.2f\n", z);
	printf("Нажмите любую клавишу.\n");

	return 0;
}