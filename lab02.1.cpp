// Lab_02.cpp
// Кемпа Анастасія
// Лабораторна робота №2.1
// Лінійні програми
// Варіант 12

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = acos(-1.0);

    double a;   // вхідний параметр
    double z1;  // результат першого виразу
    //double z2;  // результат другого виразу

    cout << "a = ";
    cin >> a;   // користувач сам вводить число

    // Формули
    z1 = (sin(4.0 * a) / (1.0 + cos(4.0 * a))) * (cos(2.0 * a) / (1.0 + cos(2.0 * a)));
    //z2 = 1.0 / tan(1.5 * PI - a);

    // Вивід
    cout << endl;
    cout << "z1 = " << z1 << endl; // change 2
   // cout << "z2 = " << z2 << endl; // change 3

    return 0;
}
