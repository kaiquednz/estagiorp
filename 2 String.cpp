#include <iostream>
#include <string>

using namespace std;

int ACounter(string texto) {
    int count = 0;
    for (char c : texto) {
        if (tolower(c) == 'a') {
            count++;
        }
    }
    return count;
}

int main() {
    string texto;
    cout << "Digite um texto: ";
    getline(cin, texto);

    int quantidade = ACounter(texto);
    cout << "A letra 'a' aparece " << quantidade << " vezes no texto." << endl;

    return 0;
}