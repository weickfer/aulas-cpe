#include <iostream>;
#include <list>;

using namespace std;

int main() {
    list<int> lista = {};

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    cout << "Digite um numero:\n";
    cin >> n1;
    cout << "Digite um segundo numero:\n";
    cin >> n2;
    cout << "Digite um terceiro numero:\n";
    cin >> n3;

    lista.push_back(n1);
    lista.push_back(n2);
    lista.push_back(n3);

    lista.sort();

    for (int n:lista) {
        cout << n << " ";
    }

    return 0;
}