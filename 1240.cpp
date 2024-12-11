#include <iostream>
#include <string>

using namespace std;

int main() {
    int N; // Número de casos de teste
    cin >> N;

    for (int i = 0; i < N; ++i) {
        long long A, B; // Os dois inteiros
        cin >> A >> B;

        // Converte A e B para strings
        string strA = to_string(A);
        string strB = to_string(B);

        // Verifica se strB é um sufixo de strA
        if (strA.size() >= strB.size() && strA.substr(strA.size() - strB.size()) == strB) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}
