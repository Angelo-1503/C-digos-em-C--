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

    // Verificando se a sequ�ncia de vogais � um pal�ndromo
    int n = vowels.size();
    for (int i = 0; i < n / 2; ++i) {
        if (vowels[i] != vowels[n - i - 1]) {
            return false; // N�o � um pal�ndromo
        }
    }

    return true; // � um pal�ndromo
}

int main() {
    string laugh;
    getline(cin, laugh); // L� a sequ�ncia de risada

    // Chama a fun��o e imprime o resultado
    if (isFunnyLaugh(laugh)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
