#include<iostream>
using namespace std;

int main() {
    cout << "Querido usuario por favor digite um numero inteiro\n";
    int first = 0;
    cin >> first;


    int second = 0;
    cout << "Digite outro numero.\n";
    cin >> second;

    int operatorToCalc = 0;
    
    cout << "Defina o operador para realizar a conta:\n";

    cout << "1. +\n";
    cout << "2. -\n";
    cout << "3. *\n";
    cout << "4. /\n";

    cin >> operatorToCalc;

    switch (operatorToCalc)
    {
    case 1:
        /* code */
        cout << "Resultado: " << first + second;
        break;
    case 2:
        cout << "Resultado: " << first - second;
        break;
    case 3:
        cout << "Resultado: " << first * second;
        break;
    case 4:
        cout << "Resultado: " << first / second;
        break;
    default:
        break;
    }

    return 0;
}