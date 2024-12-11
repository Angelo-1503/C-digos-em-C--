#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;  // Número de casos de teste
    cin >> N;

    while (N--) {
        string A, B;
        cin >> A >> B;

        // Verifica se B é maior que A em tamanho
        if (B.size() > A.size()) {
            cout << "nao encaixa" << endl;
        } else {
            // Verifica se o final de A corresponde a B
            if (A.substr(A.size() - B.size()) == B) {
                cout << "encaixa" << endl;
            } else {
                cout << "nao encaixa" << endl;
            }
        }
    }

    return 0;
}
