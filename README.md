# lab02
// Кемпа Анастасія
// Лабораторна робота No 2
// Лінійні програми.
// Варіант 12

#include <iostream>
#include <cmath>   // для cos()

using namespace std;
const double PI = 3.14159265358979323846;

int main() {
    double a;   // вхідний параметр
    double z1;  // результат першого виразу
    double z2;  // результат другого виразу

    cout << "a = ";
    cin >> a;

    // Додано перевірку
    cout << "Ви ввели a = " << a << endl;

    // Обчислення
    z1 = (sin(a)) / (1 + (cos(4 * a)) * (cos(2 * a)) / (1 + cos(2 * a)));
    z2 = cos((1.5 * PI) - a) / sin((1.5 * PI) - a);

    // Вивід
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
