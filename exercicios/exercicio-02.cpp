#include<iostream>
#include<math.h>

using namespace std;

bool verifyIfNumberIsPrimo(int n) {
  // Números menores OU iguais a UM não são primos.
  if(n <= 1) {
    return false;
  }

  // O número dois é o único número primo.
  if(n == 2) {
    return true;
  }

  // Qualquer número que for divisível por dois não é primo, exceto o próprio número dois.
  if(n % 2 == 0) {
    return false;
  }

  // Dividir o número N por todos os números ímpares de 3 até N - 1.
  for (int i = 3; i < n; i+=2) {
    if(n % i == 0) {
      return false;
    }
  }
  
  return true;
}

int main() {
  int number = 0;

  cout << "Digite o valor que deseja verificar.\n";
  cin >> number;

  bool isPrimo = verifyIfNumberIsPrimo(number);

  if(isPrimo) {
    cout << "O numero " << number << " e primo!";
  } else {
    cout << "O numero " << number << " nao e primo :(";
  }
};