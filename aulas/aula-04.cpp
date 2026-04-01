#include<iostream>
#include<math.h>
#include<list>
using namespace std;

int main() {
    float distance = 0;
    float price = 0;
    float firstFeeDistance = 50;
    float secondFeeDistance = 150;

    cout << "Quantos KM voce rodou?";
    cin >> distance;

    if(distance <= 50) {
        price += 1.75 * distance;
    }

    if(distance > 50 && distance <= 150) {
        float firstFeePrice = 1.75 * 50;
        float secondFeePrice = 1.65 * (distance - 50);
        price += firstFeePrice + secondFeePrice;
    }

    if (distance > 150) {
        float firstFeePrice = 1.75 * 150;
        float secondFeePrice = 1.65 * (distance - 150);
        
        price += firstFeeDistance + secondFeeDistance;
    }

    cout << "O valor a pagar e: " << price;

    return 0;
}
