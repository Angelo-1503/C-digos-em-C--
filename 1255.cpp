#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
    int N; // N�mero de casos de teste
    cin >> N;
    cin.ignore(); // Ignorar o caractere de nova linha ap�s a leitura de N

    while (N--) {
        string line;
        getline(cin, line); // Ler a linha de texto

        map<char, int> frequency; // Mapa para contar a frequ�ncia das letras

        // Contar a frequ�ncia das letras
        for (char c : line) {
            if (isalpha(c)) { // Verifica se � uma letra
                c = tolower(c); // Converte para min�scula
                frequency[c]++; // Incrementa a contagem
            }
        }

        // Encontrar a(s) letra(s) com a maior frequ�ncia
        int maxFrequency = 0;
        vector<char> mostFrequentLetters;

        for (const auto& entry : frequency) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
                mostFrequentLetters.clear(); // Limpa a lista se uma nova frequ�ncia m�xima for encontrada
                mostFrequentLetters.push_back(entry.first);
            } else if (entry.second == maxFrequency) {
                mostFrequentLetters.push_back(entry.first); // Adiciona � lista se a frequ�ncia � igual � m�xima
            }
        }

        // Ordenar as letras em ordem alfab�tica
        sort(mostFrequentLetters.begin(), mostFrequentLetters.end());

        // Imprimir as letras com maior frequ�ncia
        for (char letter : mostFrequentLetters) {
            cout << letter;
        }
        cout << endl; // Nova linha ap�s cada caso de teste
    }

    return 0;
}

