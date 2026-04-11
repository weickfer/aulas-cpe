#include<iostream>

using namespace std;

int main() {
  // Definir as variaveis principais do pg.
  int paraCriptografa = 0;
  int chaveSecreta = 0;

  // Peguntar ao usuário o valor que deve ser criptografado 
  // e salva em paraCriptografa
  cout << "Escreva um numero inteiro entre 1 e 255 para ser criptografado: ";
  cin >> paraCriptografa;
  
  // oque esta entre parenteses verifica se o número esta entre 1 e 255, mas
  // o ! na frente inverte a lógica. Então tudo que esta abaixo do 1 e 
  // acima do 255 cai no if.
  if(!(paraCriptografa >= 1 && paraCriptografa <= 255)) {
    cout << "Apenas numeros entre 1 e 255 sao aceitos.";
    
    return 0;
  }
  
  // Peguntar ao usuário o valor da chave secreta e define o valor para chaveSecreta
  cout << "Escreva um numero inteiro entre 1 e 155 para ser a chave secreta: ";
  cin >> chaveSecreta;
  
  // mesma logica do if anterior, mas com o intervalo 1-155.
  if(!(chaveSecreta >= 1 && chaveSecreta <= 155)) {
    cout << "Apenas numeros entre 1 e 155 sao aceitos.";
    
    return 0;
  }


  // Operação XOR, por baixo dos panos o numero vira binário e se realize o XOR
  // valores iguais viram 0 e diferentes viram 1
  int embaralhar = paraCriptografa ^ chaveSecreta;

  // O resultado do XOR é exibido ao cliente.
  cout << "Embaralho: " << embaralhar << "\n";

  // Aqui expandimos 3 zeros no final do binário, e incrementamos 100 no número final.
  int shiftParaEsquerda = (embaralhar * 8) + 100;

  cout << "Expansao para esquerda: " << shiftParaEsquerda << "\n";

  // Retira os ultimos zeros, mas aqui ja esta diferente devido aos 100 incrementados.
  int shiftParaDireita = shiftParaEsquerda / 8;

  cout << "Seu numero criptografado: " << shiftParaDireita << "\n";

  // O calculo desfaz todas as operações anteriores
  int desfazer = ((shiftParaDireita * 8) - 100) / 8;

  // O XOR é calculado se comparando o desfazer com a chave secreta.
  int descriptografado = desfazer ^ chaveSecreta;

  cout << "Processo inverso: " << descriptografado;

  return 0;
}