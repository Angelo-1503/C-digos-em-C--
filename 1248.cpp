#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

void resolver_dieta(int N) {
    for (int i = 0; i < N; ++i) {
        string dieta, cafe_manha, almoco;
        getline(cin, dieta);
        getline(cin, cafe_manha);
        getline(cin, almoco);

        set<char> alimentos_dieta(dieta.begin(), dieta.end()); // Alimentos permitidos pela dieta
        set<char> consumidos;  // Alimentos j� consumidos no caf� da manh� e almo�o

        bool trapaceiro = false;

        // Verificar o caf� da manh�
        for (char c : cafe_manha) {
            if (alimentos_dieta.count(c)) {  // O alimento est� na dieta
                if (consumidos.count(c)) {  // Alimento j� foi consumido
                    trapaceiro = true;
                    break;
                }
                consumidos.insert(c);  // Marca o alimento como consumido
            } else {  // Alimento n�o est� na dieta
                trapaceiro = true;
                break;
            }
        }

        // Verificar o almo�o, se ainda n�o for considerado trapaceiro
        for (char c : almoco) {
            if (trapaceiro) break;
            if (alimentos_dieta.count(c)) {  // O alimento est� na dieta
                if (consumidos.count(c)) {  // Alimento j� foi consumido
                    trapaceiro = true;
                    break;
                }
                consumidos.insert(c);  // Marca o alimento como consumido
            } else {  // Alimento n�o est� na dieta
                trapaceiro = true;
                break;
            }
        }

        // Se for trapaceiro, imprimir "CHEATER"
        if (trapaceiro) {
            cout << "CHEATER" << endl;
        } else {
            // Caso n�o seja trapaceiro, calcular o que resta da dieta
            string jantar;
            for (char c : dieta) {
                if (!consumidos.count(c)) {
                    jantar.push_back(c);  // Alimento que ainda n�o foi consumido
                }
            }
            sort(jantar.begin(), jantar.end());  // Ordenar em ordem alfab�tica
            cout << jantar << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;  // N�mero de casos de teste
    cin.ignore();  // Ignorar o '\n' ap�s a leitura do n�mero

    resolver_dieta(N);  // Processar os casos de teste

    return 0;
}
