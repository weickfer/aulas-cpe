#include <iostream>;

using namespace std;

int main() {
    int n = 0;
    
    cout << "Digite um numero entre 0 e 15.\n";
    cin >> n;
    if(!(n >= 0 && n <= 15)) {
        cout << "Erro. Insira um numero entre o intervalo pedido.";
        return 0;
    }

    int q0 = n / 2;
    int r0 = n % 2;
    
    int q1 = q0 / 2;
    int r1 = q0 % 2;
    
    int q2 = q1 / 2;
    int r2 = q1 % 2;
    
    int r3 = q2 % 2;

    cout << r3 << r2 << r1 << r0; 

    return 0;
}