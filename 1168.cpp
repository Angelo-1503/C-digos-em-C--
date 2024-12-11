#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // Número de casos de teste
    cin.ignore();  // Ignora o '\n' após a leitura do número

    // Mapa com o número de LEDs para cada dígito
    int leds_por_digito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    // Processar cada caso de teste
    for (int i = 0; i < N; ++i) {
        string numero;
        getline(cin, numero);  // Ler o número como string

        int total_leds = 0;

        // Para cada dígito no número, somar a quantidade de LEDs
        for (char digito : numero) {
            total_leds += leds_por_digito[digito - '0'];
        }

        // Imprimir o total de LEDs necessários para esse número
        cout << total_leds << " leds" << endl;
    }

    return 0;
}
