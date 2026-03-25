#include <iostream>
#include <map>
#include <list>

using namespace std;

string ePar(int n) {
    map<int, string> texto = {{0, "Verdadeiro"}, {1, "Falso"}};

    return texto[n % 2];
} 

int somatorio(list<int> lista) {
    int total = 0;

    for(int n : lista) {
        total = total + n;

        cout << "Numero atual: " << n << "\n";
        cout << "E par: " << ePar(n) << "\n";
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

    cout << "Resultado medio: " << resultado;

    return 0;
}