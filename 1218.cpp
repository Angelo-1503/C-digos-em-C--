#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n, caseNumber = 1;
    string line;

    while (getline(cin, line)) {
        // Lê o número N
        n = stoi(line);

        // Lê a linha de calçados
        getline(cin, line);
        istringstream iss(line);
        int totalPairs = 0, femaleCount = 0, maleCount = 0;

        // Processa cada par de calçados
        int size;
        char gender;
        while (iss >> size >> gender) {
            if (size == n) {
                totalPairs++;
                if (gender == 'F') {
                    femaleCount++;
                } else if (gender == 'M') {
                    maleCount++;
                }
            }
        }

        // Saída formatada
        cout << "Caso " << caseNumber << ":\n";
        cout << "Pares Iguais: " << totalPairs << "\n";
        cout << "F: " << femaleCount << "\n";
        cout << "M: " << maleCount << "\n\n";

        caseNumber++;
    }

    return 0;
}

