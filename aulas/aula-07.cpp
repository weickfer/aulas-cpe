#include<iostream>
using namespace std;


int main() {
    string palavra = "";
    string vogais = "aeiouAEIOU";

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    int counter = 0;

    for (int i = 0; i < palavra.size(); i++) {
        char letra = palavra[i];
        
        for(int j = 0; j < vogais.size(); j++) {
            char vogal = vogais[j];

            if(letra == vogal) {
                counter++;
                cout << "A letra {" << letra << "} e vogal!\n";
            }
        };
    }

    cout << counter;
    
    return 0;
}