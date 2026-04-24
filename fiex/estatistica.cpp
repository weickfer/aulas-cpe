#include <iostream>
#include <list>
#include <cmath>

using namespace std;

int main() {
    list<double> valores;
    double valor, valor_referencia;
    int n;

    cout << "Quantos valores experimentais voce deseja inserir? ";
    cin >> n;

    if (n <= 0) {
        cout << "Numero invalido de valores." << endl;
        return 1;
    }

    cout << "Insira os " << n << " valores:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> valor;
        valores.push_back(valor); // Armazenando na lista
    }

    cout << "Insira o valor de referencia (teorico/real) para o calculo dos erros: ";
    cin >> valor_referencia;

    // 1. Calculo da Media
    double soma = 0.0;
    for (double v : valores) {
        soma += v;
    }
    double media = soma / n;

    // 2. Calculo do Desvio Padrao (Amostral)
    double soma_quadrados_diferencas = 0.0;
    for (double v : valores) {
        soma_quadrados_diferencas += pow(v - media, 2);
    }
    
    double desvio_padrao = 0.0;
    if (n > 1) {
        desvio_padrao = sqrt(soma_quadrados_diferencas / (n - 1));
    }

    // 3. Calculo do Erro Total (Erro Absoluto)
    // Diferenca entre a media obtida e o valor de referencia
    double erro_total = abs(media - valor_referencia);

    // 4. Calculo do Erro Relativo
    // Razao entre o erro total e o valor de referencia
    double erro_relativo = 0.0;
    if (valor_referencia != 0) {
        erro_relativo = erro_total / abs(valor_referencia);
    }

    // Exibindo os resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Media: " << media << endl;
    cout << "Desvio Padrao (Amostral): " << desvio_padrao << endl;
    cout << "Erro Total (Absoluto): " << erro_total << endl;
    cout << "Erro Relativo: " << erro_relativo << " (" << erro_relativo * 100 << "%)" << endl;

    return 0;
}