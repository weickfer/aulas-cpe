// Nome: Weickmam Ferreira Machado
// Data: 10/04/2026
// Matrícula: 261038055 

#include<iostream>

using namespace std;

int main() {
  // Definir as variaveis principais do pg
  int paraCriptografa = 0;
  int chaveSecreta = 0;

  // Pegunta ao usuário o valor que deve ser criptografado 
  // e salva em paraCriptografa
  cout << "Escreva um numero inteiro entre 1 e 255 para ser criptografado: ";
  cin >> paraCriptografa;
  
  // O If verifica se `paraCriptografia` não esta incluso no intervalo 1-255
  if(paraCriptografa < 1 || paraCriptografa > 255) {
    cout << "Apenas numeros entre 1 e 255 sao aceitos.";
    
    return 0;
  }
  
  // Peguntar ao usuário o valor da chave secreta e define o valor para chaveSecreta
  cout << "Escreva um numero inteiro entre 1 e 155 para ser a chave secreta: ";
  cin >> chaveSecreta;
  
  // mesma logica do if anterior, mas com o intervalo 1-155
  if(chaveSecreta < 1 || chaveSecreta > 155) {
    cout << "Apenas numeros entre 1 e 155 sao aceitos.";
    
    return 0;
  }


  // Operação XOR, por baixo dos panos o numero vira binário e se realize o XOR valores iguais viram 0 e diferentes viram 1
  int embaralhar = paraCriptografa ^ chaveSecreta;

  // O resultado do XOR é exibido para usuário.
  cout << "Embaralho: " << embaralhar << "\n";

  // Expandir 3 zeros no final, e incrementar 100
  int shiftParaEsquerda = (embaralhar * 8) + 100;

  cout << "Expansao para esquerda: " << shiftParaEsquerda << "\n";

  // Retira os ultimos zeros.
  int shiftParaDireita = shiftParaEsquerda / 8;

  cout << "Seu numero criptografado: " << shiftParaDireita << "\n";

  // Desfazer
  // o (shiftParaDireita * 8) fica igual a shiftParaEsquerda
  // shiftParaEsquerda - 100 volta para (embaralhar * 8)
  // (embaralhar * 8) / 8 cancela 8 com 8 e fica apenas embaralhar.
  int desfazer = ((shiftParaDireita * 8) - 100) / 8;

  // O XOR é calculado comparando o desfazer com a chave secreta.
  int descriptografado = desfazer ^ chaveSecreta;

  cout << "Numero descriptografado: " << descriptografado;

  return 0;
}