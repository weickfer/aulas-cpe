#include <iostream>
#include <list>

using namespace std;

int somatorio(list<int> lista) {
    int total = 0;

    for(int n : lista) {
        total = total + n;
    }

    return total;
}

int media(list<int> lista) {
    int resultado = somatorio(lista);

    return resultado / lista.size();
}

int main() {
    list<int> numeros = {1,2,3,4,5};
    int resultado = media(numeros);

    cout << "Resultado: " << resultado;

    return 0;
}