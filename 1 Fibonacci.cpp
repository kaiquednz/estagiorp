#include <iostream>
using namespace std;

bool Fibonacci(int n) {

    int a = 0, b= 1;
    while (b <= n)
    {
        if (b == n || a == n) {
            return true;
        }

        int temp = b;
        b = a + b;
        a = temp; 
        
    }

    return false;
    
}

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

        if (Fibonacci(numero))
        {
            cout << "O numero " << numero << " pertence a sequencia da Fibonacci." << endl;
        }
        else {
            cout << "O numero " << numero << " nao pertence a sequencia da Fibonacci." << endl;
        }

        return 0;
        
}

// SEM ACENTOS, PARA NÃO TER RISCO DE PROBLEMAS AO COMPILAR