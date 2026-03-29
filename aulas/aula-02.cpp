#include<iostream>
#include<map>
using namespace std;

int ePar(int n) {
    return n % 2;
}

string eParMask(int v) {
    map<int, string> texto = {{0, "Verdadeiro"}, {1, "Falso"}};

    return texto[v];
}

int main() {
    int numero;

    numero = 4 + 6;

    cout << eParMask(ePar(numero / 5)) << " " << eParMask(ePar(numero * 2));

    return 0;
}