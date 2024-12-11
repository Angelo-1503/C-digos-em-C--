#include <iostream>
#include <string>

using namespace std;

int main() {
    int C; // N�mero de casos de teste
    cin >> C;

    while (C--) {
        int B, E; // Valores de in�cio e fim
        cin >> B >> E;

        string sequence = ""; // String para armazenar a sequ�ncia crescente

        // Gerando a sequ�ncia crescente de B a E
        for (int i = B; i <= E; ++i) {
            sequence += to_string(i); // Converte o n�mero i para string e adiciona
        }

        // Criando a sequ�ncia espelho
        string mirroredSequence = sequence + string(sequence.rbegin(), sequence.rend());

        // Imprimindo a sequ�ncia espelho
        cout << mirroredSequence << endl;
    }

    return 0;
}
