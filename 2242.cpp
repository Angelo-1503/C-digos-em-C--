#include <iostream>
#include <string>

using namespace std;

bool isFunnyLaugh(const string& laugh) {
    string vowels;

    // Extraindo as vogais da risada
    for (char c : laugh) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels += c;
        }
    }

    // Verificando se a sequência de vogais é um palíndromo
    int n = vowels.size();
    for (int i = 0; i < n / 2; ++i) {
        if (vowels[i] != vowels[n - i - 1]) {
            return false; // Não é um palíndromo
        }
    }

    return true; // É um palíndromo
}

int main() {
    string laugh;
    getline(cin, laugh); // Lê a sequência de risada

    // Chama a função e imprime o resultado
    if (isFunnyLaugh(laugh)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
