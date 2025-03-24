#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void Task5() {
    double x, y, z;
    
    auto readDouble = [](const string& prompt) -> double {
        double value;
        cout << prompt;
        while (!(cin >> value)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка! Введите число: " << prompt;
        }
        return value;
    };

    x = readDouble ("Введите число x: ");
    y = readDouble("Введите число y: ");
    z = readDouble("Введите число z: ");

    double sum_frac = fmod(fabs(x), 1) + fmod(fabs(y), 1) + fmod(fabs(z), 1);
    int sum_int = static_cast<int>(x) + static_cast<int>(y) + static_cast<int>(z);
    
    cout << "Сумма дробных частей: " << sum_frac << endl;
    cout << "Сумма целых частей: " << sum_int << endl;
}