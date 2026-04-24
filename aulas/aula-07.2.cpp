#include<iostream>
#include<string>

using namespace std;

int main() {
    int inicio = 0;
    int fim = 0;

    cout << "Iremos somar todos os números entre um intervalo definido.\n";
    cout << "Digite um inicio: ";
    cin >> inicio;
    
    cout << "Digite um fim: ";
    cin >> fim;

    int soma = 0;
    for (int i = inicio; i <= fim; i++) {
        soma = soma + i;
    }

    cout << soma;


    return 0;
}