#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
    int N; // Número de casos de teste
    cin >> N;
    cin.ignore(); // Ignorar o caractere de nova linha após a leitura de N

    while (N--) {
        string line;
        getline(cin, line); // Ler a linha de texto

        map<char, int> frequency; // Mapa para contar a frequência das letras

        // Contar a frequência das letras
        for (char c : line) {
            if (isalpha(c)) { // Verifica se é uma letra
                c = tolower(c); // Converte para minúscula
                frequency[c]++; // Incrementa a contagem
            }
        }

        // Encontrar a(s) letra(s) com a maior frequência
        int maxFrequency = 0;
        vector<char> mostFrequentLetters;

        for (const auto& entry : frequency) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
                mostFrequentLetters.clear(); // Limpa a lista se uma nova frequência máxima for encontrada
                mostFrequentLetters.push_back(entry.first);
            } else if (entry.second == maxFrequency) {
                mostFrequentLetters.push_back(entry.first); // Adiciona à lista se a frequência é igual à máxima
            }
        }

        // Ordenar as letras em ordem alfabética
        sort(mostFrequentLetters.begin(), mostFrequentLetters.end());

        // Imprimir as letras com maior frequência
        for (char letter : mostFrequentLetters) {
            cout << letter;
        }
        cout << endl; // Nova linha após cada caso de teste
    }

    return 0;
}

