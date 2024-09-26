#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int t;
    int a, b;
    int x, y, z;
    cout << "1 - треугольник\n";
    cout << "2 - квадрат или прямоугольник\n";
    cout << "Введите 1 или 2: ";
    cin >> t;
    if (t == 1) {
        cout << "Введите 3 стороны треугольника:\n";
        cin >> x;
        cin >> y;
        cin >> z;
        if (x == y == z) {
            cout << "Это равносторонний треугольник\n";
        }
        else
        {
            cout << "Это не равносторонний треугольник\n";
        }
    }
    if (t == 2) {
        cout << "Введите 2 стороны прямоугольника:\n";
        cin >> a;
        cin >> b;
        if (a == b) {
            cout << "Это квадрат\n";
        }
        else {
            cout << "Это прямоугольник\n";
        }

    }
}