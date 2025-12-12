#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    
    cout << "Сумма: " << a + b << endl;
    cout << "Разность: " << a - b << endl;
    cout << "Произведение: " << a * b << endl;
    if (b != 0) {
        cout << "Частное: " << a / b << endl;
    }
    return 0;
}
