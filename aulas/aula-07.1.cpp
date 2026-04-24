#include<iostream>
#include<string>

using namespace std;

int main() {
    string palavra = "";
    cout << "Digite uma palavra com 5 letras: ";
    cin >> palavra;

    if(palavra.size() != 5) {
        cout << "A palavra deve ter 5 letras";

        return 0;
    }

    // if (palavra == (palavra[4] + palavra[3] + palavra[2] + palavra[1] + palavra[0])) {

    // }
    if(palavra[0]==palavra[4] && palavra[1]==palavra[3]) {
        cout << "PALINDROMO!";
    }

    return 0;
}