#include <stdio.h>
#include <locale.h>

int main() {
	float x, y, z;
	setlocale(LC_ALL, "Russian");
	printf("������� ����� x: ");
	scanf_s("%f", &x);
	printf("������� ����� y: ");
	scanf_s("%f", &y);
	x = x * x;
	y = y * y;
	z = x + y;
	printf("����� ���� ����� ����� %.2f\n", z);
	z = x - y;
	printf("�������� ���� ����� ����� %.2f\n", z);
	z = x * y;
	printf("����������� ���� ����� ����� %.2f\n", z);
	z = x / y;
	printf("������� ���� ����� ����� %.2f\n", z);
	printf("������� ����� �������.\n");

	return 0;
}