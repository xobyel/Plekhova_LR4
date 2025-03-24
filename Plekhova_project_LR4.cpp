#include <iostream>
#include <limits>

using namespace std;


int side1, side2;

void Task1() {
    cout << "Введите длину первой стороны прямоугольника: ";
    while (!(cin >> side1) || side1 <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Введите положительное целое число: ";
    }
    
}


void Task2() {
    cout << "Введите длину второй стороны прямоугольника: ";
    while (!(cin >> side2) || side2 <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Введите положительное целое число: ";
    }

    return 0;
}

