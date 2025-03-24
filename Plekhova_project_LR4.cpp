#include <iostream>
#include <limits>

using namespace std;

extern int side2; 

void Task2() {
    cout << "Введите длину второй стороны прямоугольника: ";
    while (!(cin >> side2) || side2 <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Введите положительное целое число: ";
    }
}