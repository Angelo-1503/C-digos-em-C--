#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int coluna;
    char operacao;

    cin >> coluna;
    cin >> operacao;

    double matriz[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    double soma = 0.0;
    for (int i = 0; i < 12; i++) {
        soma += matriz[i][coluna];
    }

    double resultado;
    if (operacao == 'S') {
        resultado = soma;
    } else if (operacao == 'M') {
        resultado = soma / 12.0;
    }

    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}

