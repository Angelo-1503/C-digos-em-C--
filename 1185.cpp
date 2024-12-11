#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operacao;
    cin >> operacao;

    double matriz[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    double soma = 0.0;
    int contagem = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 11 - i; j++) {
            soma += matriz[i][j];
            contagem++;
        }
    }

    double resultado;
    if (operacao == 'S') {
        resultado = soma;
    } else if (operacao == 'M') {
        resultado = soma / contagem;
    }

    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}

