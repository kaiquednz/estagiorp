#include <iostream>
using namespace std;

int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    while (K < INDICE)
    {
        K = K + 1;
        SOMA = SOMA + K;
    }

    cout << "O valor de SOMA e: " << SOMA << endl; // Ao fim do looping, o valor de SOMA será 77

    return 0;
    
}