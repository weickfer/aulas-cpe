#include <iostream>;

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int aux = 0;

    cout << "Digite um numero:\n";
    cin >> a;
    cout << "Digite um segundo numero:\n";
    cin >> b;
    cout << "Digite um terceiro numero:\n";
    cin >> c;

    if (a > b) {
        aux = b;

        b = a;
        a = aux;
    }

    if (b > c) {
        aux = c;

        c = b;
        b = aux;
    }

    if (a > b) {
        aux = b;

        b = a;
        a = aux;
    }

    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    cout << "C: " << c << "\n";

    return 0;
}