#include <iostream>
#include <iomanip>
#include <windows.h>
#include "ModulesPiatyshev.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x, y, z;
    char a, b;

    cout << "Введіть x: "; cin >> x;
    cout << "Введіть y: "; cin >> y;
    cout << "Введіть z: "; cin >> z;
    cout << "Введіть a: "; cin >> a;
    cout << "Введіть b: "; cin >> b;
    cout << endl;

    cout << "Автор: Пятишев М. С. \xC2\xA9" << endl;
    cout << "Умова: " << boolalpha << (a + 1 >= b) << endl;
    cout << "Hex: x=" << hex << (int)x << ", y=" << (int)y << ", z=" << (int)z << dec << endl;

    double S = s_calculation(x, y, z);
    cout << "S: " << S << endl;

    cin.ignore();
    cin.get();
    return 0;
}
