#include <iostream>
#include <limits>

using namespace std;

extern int side1; 

void Task1() {
    cout << "Введите длину первой стороны прямоугольника: ";
    while (!(cin >> side1) || side1 <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Введите положительное целое число: ";
    }
}