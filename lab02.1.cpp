// Lab_02.cpp
// ����� ��������
// ����������� ������ �2.1
// ˳��� ��������
// ������ 12

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = acos(-1.0);

    double a;   // ������� ��������
    double z1;  // ��������� ������� ������
    //double z2;  // ��������� ������� ������

    cout << "a = ";
    cin >> a;   // ���������� ��� ������� �����

    // �������
    z1 = (sin(4.0 * a) / (1.0 + cos(4.0 * a))) * (cos(2.0 * a) / (1.0 + cos(2.0 * a)));
    //z2 = 1.0 / tan(1.5 * PI - a);

    // ����
    cout << endl;
    cout << "z1 = " << z1 << endl; // change 2
   // cout << "z2 = " << z2 << endl; // change 3

    return 0;
}
