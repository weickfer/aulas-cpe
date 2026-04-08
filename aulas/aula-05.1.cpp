#include <iostream>;
#include <list>;

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    int maior = 0;
    int medio = 0;
    int menor = 0;

    cout << "Digite um numero:\n";
    cin >> a;
    cout << "Digite um segundo numero:\n";
    cin >> b;
    cout << "Digite um terceiro numero:\n";
    cin >> c;

    if (a > b && c < b) {
        maior = a;
        medio = b;
        menor = c;
    }

    if (a > c && b < c) {
        maior = a;
        medio = c;
        menor = b;
    }

    // if (...) {

    // }



    return 0;
}