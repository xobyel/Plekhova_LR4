#include <iostream>

using namespace std;

extern int side1, side2;

void Task4() {
    if (side1 == 0 || side2 == 0) {
        cout << "Ошибка! Сначала введите длины сторон (пункты 1 и 2 меню)." << endl;
        return;
    }
    cout << "Периметр прямоугольника: " << 2 *  (side1 + side2) << endl;
}