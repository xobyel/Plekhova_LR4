#include <iostream>
<<<<<<< HEAD

using namespace std;

extern int side1, side2;
=======


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
}

void Task3() {
    if (side1 == 0 || side2 == 0) {
        cout << "Ошибка! Сначала введите длины сторон (пункты 1 и 2 меню)." << endl;
        return;
    }
    cout << "Площадь прямоугольника: " << side1 * side2 << endl;
    
}
>>>>>>> origin/main

void Task4() {
    if (side1 == 0 || side2 == 0) {
        cout << "Ошибка! Сначала введите длины сторон (пункты 1 и 2 меню)." << endl;
        return;
    }
<<<<<<< HEAD
    cout << "Периметр прямоугольника: " << 2 *  (side1 + side2) << endl;
}
=======

    return 0;
}

>>>>>>> origin/main
