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
  int maxTentativas = 0;
  cout << "Digite uma palavra para ser adivinhada: ";
  cin >> palavra;
  
  system("cls");
  
  int tamanho = palavra.length();
  
  cout << "Digite o numero de tentativas: ";
  cin >> maxTentativas;
  
  system("cls");
  
  if(maxTentativas < tamanho) {
    cout << "O numero de tentativas nao pode ser menor que o numero de letras.";
    return 0;
  }
  
  int tentativas = 0;
  
  string letras = "";
  
  while (true) {
    if((maxTentativas - tentativas) == 0) {
      cout << "Voce esgotou todas as suas tentativas :(" << endl;
      cout << "A palavra era: " << palavra << endl;
      cout << endl;
      break;
    }

    string letrasOrdenadas = displayForca(palavra, letras);

    if(letrasOrdenadas.find("_") == string::npos) {
      cout << "Parabens! Voce acertou a palavra. ";

      break;
    }

    cout << "Sao ("<< tamanho <<") letras: " << letrasOrdenadas << endl;
    cout << "Voce tem ("<< maxTentativas - tentativas <<") tentativas." << endl;
    // cout << letrasOrdenadas << endl;
    cout << endl;
    cout << "Digite uma letra: ";
    char letra;
    cin >> letra;
    letras = letras + letra;
    tentativas = tentativas + 1;

    system("cls");
  }

  return 0;
}