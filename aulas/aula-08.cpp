#include<iostream>
#include<string>

using namespace std;

int main() {
    string palavra = "";
    cout << "Digite uma palavra : ";
    // cin >> palavra;
    getline(cin, palavra);
    string reverso = "";

    for (int i = palavra.length() - 1; i >= 0; i--) {
        reverso = reverso + palavra[i];
    }
      
    if(palavra == reverso) {
        cout << "A palavra acima e um palindromo!";
    }

    return 0;
}