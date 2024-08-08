#include <iostream>
using namespace std;

int main() {
    int a, b, c, n;
    cout << "Choose an action to perform 1-Addition, 2-Subtraction, 3-Multiplication, 4-Division\n";
    cin >> n;
    cout << "Enter the first number: \n";
    cin >> a;
    cout << "Enter the second number: \n";
    cin >> b;
    switch (n) {
        case 1:
            c = a + b;
            break;
        case 2:
            c = a - b;
            break;
        case 3:
            c = a * b;
            break;
        case 4:
            c = a / b;
            break;
    }
    cout << c;
}