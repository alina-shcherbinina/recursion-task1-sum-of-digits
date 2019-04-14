#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int Summ(int64_t a) {
	if (a < 10)
		return a;
	if (a >= 10)
		return (Summ(a / 10)+ a % 10);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int64_t a;
	cout << "Введите число: ";
	cin >> a;
	cout << "ответ: " << Summ(a);
	return 0;
}

