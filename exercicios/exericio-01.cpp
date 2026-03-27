#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int adjacente = 0;
    int oposto = 0;
    int hipotenusa = 0;

    cout << "Digite o adjacente do seu triangulo rentangulo: \n";
    cin >> adjacente;
    
    cout << "Digite o oposto do seu triangulo rentangulo: \n";
    cin >> oposto;

    cout << "Adjacente * Adjacente:\n";
    cout << pow(adjacente, 2);
    cout << "\n";
    cout << "Oposto * Oposto:\n";
    cout << pow(oposto, 2);
    cout << "\n";

    if(adjacente == 0 || oposto == 0) {
        cout << "Os catetos devem ser maiores que zero.";
        return 0;
    }

    hipotenusa = sqrt(pow(adjacente, 2) + pow(oposto, 2));


    cout << "A hipotenusa:" << hipotenusa;

    return 0;
}