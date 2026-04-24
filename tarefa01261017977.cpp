#include <iostream>
using namespace std;

int main() {
    // Nome: João Pedro De Oliveira Rodrigues
    // Matrícula: 261017977

    int n = 0;
    int chave = 0;

    // pedindo o número
    cout << "Digite o numero (1-255): ";
    cin >> n;

    // checando se tá no intervalo
    if (n < 1 || n > 255) {
        cout << "Erro: numero fora do intervalo" << endl;
        return 0; // já encerra
    }

    // pedindo a chave
    cout << "Digite a chave (1-155): ";
    cin >> chave;

    // checando a chave
    if (chave < 1 || chave > 155) {
        cout << "Erro: chave fora do intervalo" << endl;
        return 0;
    }

    // PASSO 3: XOR (embaralhar)
    int embaralhado = n ^ chave;
    cout << "PASSO EMBARALHAMENTO: " << embaralhado << endl;

    // PASSO 5: "shift manual" (multiplica por 8 e soma 100)
    int shift = (embaralhado * 8) + 100;
    cout << "PASSO SHIFT: " << shift << endl;

    // PASSO 7: "rotacao" pra direita 3 casas
    // como nao pode usar >>, fazemos na mão:
    // dividir por 8 (parte inteira) + resto * algum fator
    int shiftParaDireita = shift / 8;
     cout << "O valor Criptografado e:" << shiftParaDireita << endl; 
    int direitaParaShift = shiftParaDireita * 8; // fiz a primeira etapa do processo inverso
    int menosCem = direitaParaShift -100;
    int dividiPorOito = menosCem /8;
    int desembaralhado = dividiPorOito ^ chave;
    cout <<  "O resultado e: " << desembaralhado;
    
    return 0;


    
}