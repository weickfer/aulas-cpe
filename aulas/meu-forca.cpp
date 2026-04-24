#include<iostream>
#include<list>
#include<stdlib.h>
using namespace std;

string montarDisplaySimples(int tamanho) {
  string texto = "";

  for (int i = 0; i < tamanho; i++) {
    if(texto.length() == 0) {
      texto = texto + "_";
    } else {
      texto = texto + " _";
    }
  }

  return texto;
}

string displayForca(string objetivo, string input) {
  string display = "";

  // Passamos por cada letra da palavra secreta
  for (int i = 0; i < objetivo.length(); i++) {
    char letraAtual = objetivo[i];
    
    // Se a letraAtual existir dentro do 'input' (letras chutadas), o find() acha ela.
    // Se não achar, ele retorna string::npos
    if (input.find(letraAtual) != string::npos) {
      display += letraAtual; // Acertou a letra!
    } else {
      display += '_';        // Não acertou ainda, bota o underline.
    }
    
    // Adiciona o espaço para ficar bonito (ex: "_ _ _"), 
    // mas não adiciona depois da última letra.
    if (i < objetivo.length() - 1) {
      display += " ";
    }
  }

  return display;
}

int main() {
  string palavra = "";
  cout << "Digite uma palavra para ser adivinhada: ";
  cin >> palavra;

  system("cls");

  int tamanho = palavra.length();
  string espacos = montarDisplaySimples(tamanho);
  
  cout << "São ("<< tamanho <<") letras: " <<espacos << endl;

  int erros = 0;
  int acertos = 0;

  string letras = "";

  while (true) {
    cout << "Digite uma letra: ";
    char letra;
    cin >> letra;
    letras = letras + letra;

    string letrasOrdenadas = displayForca(palavra, letras);

    cout << letrasOrdenadas << endl;
  }

  return 0;
}