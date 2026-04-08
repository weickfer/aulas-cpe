#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float distance = 0;
    float price = 0;

    cout << "Quantos KM voce rodou?";
    cin >> distance;

    if(distance <= 50) {
        price += 1.75 * distance;
    }

    if(distance > 50 && distance <= 150) {
        price += (1.75 * 50) + 1.65 * (distance - 50);
    }

    if (distance > 150) {
        price += (1.75*50) + (1.65*100) + ((distance - 150)*1.5);
    }

    cout << "O valor a pagar e: " << price;

    return 0;
}