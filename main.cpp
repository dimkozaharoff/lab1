#include "sdt.h"
#include <iostream>

using namespace std;

// Учебная программа
int main() {
    int a, b;

    cout << "Введите первое целое число: ";
    cin >> a;

    cout << "Введите второе целое число: ";
    cin >> b;

    cout << "Сумма: " << a + b << endl;
    cout << "Разность: " << a - b << endl;
    cout << "Деление: " << a / b << endl;
    cout << "Произведение: " << a * b << endl;

    return 0;
}