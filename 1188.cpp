#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char operacao;
    cin >> operacao;

    double M[12][12];

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> M[i][j];
        }
    }

    double soma = 0.0;
    int elementos = 0;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (i > j) {
                soma += M[i][j];
                elementos++;
            }
        }
    }

    double resultado;
    if (operacao == 'M') {
        resultado = soma / elementos;
    } else {
        resultado = soma;
    }

    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}

