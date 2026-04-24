#include<iostream>
#include<locale.h>

using namespace std;

int main() {
    int x = 0;

    cout << "Digite um numero: " << endl;
    cin >> x;

    int soma = 0;
    int contador = 0;

    for (int i = 1; i < x; i++) {
        soma += i;
        contador++;

        if(soma == x && contador >= 3) {
            cout << "O numero " << x << " e triangular." << endl;
        }
    } 
    
    
    
    
    return 0;
}