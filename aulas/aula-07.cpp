#include<iostream>
using namespace std;


int main() {
    string palavra = "";
    string vogais = "aeiou";

    cout << "Digite uma palavra: ";
    cin >> palavra;

    for (int i = 0; i < palavra.size(); i++) {
        char letra = palavra[i];
        
        for(int j = 0; j < vogais.size(); j++) {
            char vogal = vogais[j];

            if(letra == vogal) {
                cout << "A letra {" << letra << "} e vogal!\n";
            }
        };
    }
    
    return 0;
}