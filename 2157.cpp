#include <iostream>
#include <string>

using namespace std;

int main() {
    int C; // Número de casos de teste
    cin >> C;

    while (C--) {
        int B, E; // Valores de início e fim
        cin >> B >> E;

        string sequence = ""; // String para armazenar a sequência crescente

        // Gerando a sequência crescente de B a E
        for (int i = B; i <= E; ++i) {
            sequence += to_string(i); // Converte o número i para string e adiciona
        }

        // Criando a sequência espelho
        string mirroredSequence = sequence + string(sequence.rbegin(), sequence.rend());

        // Imprimindo a sequência espelho
        cout << mirroredSequence << endl;
    }

    return 0;
}
