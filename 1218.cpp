#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n, caseNumber = 1;
    string line;

    while (getline(cin, line)) {
        // L� o n�mero N
        n = stoi(line);

        // L� a linha de cal�ados
        getline(cin, line);
        istringstream iss(line);
        int totalPairs = 0, femaleCount = 0, maleCount = 0;

        // Processa cada par de cal�ados
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

        // Sa�da formatada
        cout << "Caso " << caseNumber << ":\n";
        cout << "Pares Iguais: " << totalPairs << "\n";
        cout << "F: " << femaleCount << "\n";
        cout << "M: " << maleCount << "\n\n";

        caseNumber++;
    }

    return 0;
}

