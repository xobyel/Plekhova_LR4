#include <iostream>

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

void Task4() {
     if (side1 == 0 || side2 == 0) {
        cout << "Ошибка! Сначала введите длины сторон (пункты 1 и 2 меню)." << endl;
        return;
    }
    cout << "Периметр прямоугольника: " << 2 * (side1 + side2) << endl;
   
}

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

    x = readDouble("Введите число x: ");
    y = readDouble("Введите число y: ");
    z = readDouble("Введите число z: ");

    double sum_frac = fmod(fabs(x), 1) + fmod(fabs(y), 1) + fmod(fabs(z), 1);
    int sum_int = static_cast<int>(x) + static_cast<int>(y) + static_cast<int>(z);
    
    cout << "Сумма дробных частей: " << sum_frac << endl;
    cout << "Сумма целых частей: " << sum_int << endl;
}
    
}

struct MenuItem {
    string title;
    function<void()> action;
};

int main() {
    map<int, MenuItem> menu = {
        {1, {"Ввод 1-й стороны прямоугольника", Task1}},
        {2, {"Ввод 2-й стороны прямоугольника", Task2}},
        {3, {"Calculate of Area", Task3}},
        {4, {"Calculate of Perimeter", Task4}},
        {5, {"Sum of fractional and integer parts (Task 12)", Task5}}
    };

    int choice = 0;

    while (true) {
        cout << "Меню:" << endl;
        for (const auto& item : menu) {
            cout << "Task " << item.first << ". " << item.second.title << endl;
        }
        cout << "0. Выход" << endl;
        cout << "Введите номер пункта: ";
        cin >> choice;

        if (choice == 0) {
            cout << "© 2025 FirstName LastName" << endl;
            break;
        }
        cout << endl;
        if (menu.find(choice) != menu.end()) {
            menu[choice].action();
        } else {
            cout << "Некорректный ввод.";
        }
        cout << endl;
    }

    return 0;
}

 
