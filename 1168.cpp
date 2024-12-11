#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // N�mero de casos de teste
    cin.ignore();  // Ignora o '\n' ap�s a leitura do n�mero

    // Mapa com o n�mero de LEDs para cada d�gito
    int leds_por_digito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    // Processar cada caso de teste
    for (int i = 0; i < N; ++i) {
        string numero;
        getline(cin, numero);  // Ler o n�mero como string

        int total_leds = 0;

        // Para cada d�gito no n�mero, somar a quantidade de LEDs
        for (char digito : numero) {
            total_leds += leds_por_digito[digito - '0'];
        }

        // Imprimir o total de LEDs necess�rios para esse n�mero
        cout << total_leds << " leds" << endl;
    }

    return 0;
}
