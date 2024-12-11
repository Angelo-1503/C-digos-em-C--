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
        set<char> consumidos;  // Alimentos já consumidos no café da manhã e almoço

        bool trapaceiro = false;
        
        // Verificar o café da manhã
        for (char c : cafe_manha) {
            if (alimentos_dieta.count(c)) {  // O alimento está na dieta
                if (consumidos.count(c)) {  // Alimento já foi consumido
                    trapaceiro = true;
                    break;
                }
                consumidos.insert(c);  // Marca o alimento como consumido
            } else {  // Alimento não está na dieta
                trapaceiro = true;
                break;
            }
        }

        // Verificar o almoço, se ainda não for considerado trapaceiro
        for (char c : almoco) {
            if (trapaceiro) break;
            if (alimentos_dieta.count(c)) {  // O alimento está na dieta
                if (consumidos.count(c)) {  // Alimento já foi consumido
                    trapaceiro = true;
                    break;
                }
                consumidos.insert(c);  // Marca o alimento como consumido
            } else {  // Alimento não está na dieta
                trapaceiro = true;
                break;
            }
        }

        // Se for trapaceiro, imprimir "CHEATER"
        if (trapaceiro) {
            cout << "CHEATER" << endl;
        } else {
            // Caso não seja trapaceiro, calcular o que resta da dieta
            string jantar;
            for (char c : dieta) {
                if (!consumidos.count(c)) {
                    jantar.push_back(c);  // Alimento que ainda não foi consumido
                }
            }
            sort(jantar.begin(), jantar.end());  // Ordenar em ordem alfabética
            cout << jantar << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;  // Número de casos de teste
    cin.ignore();  // Ignorar o '\n' após a leitura do número

    resolver_dieta(N);  // Processar os casos de teste

    return 0;
}


