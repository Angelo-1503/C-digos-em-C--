#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break;

        vector<vector<int>> matriz(N, vector<int>(N, 1));

        for (int camada = 1; camada < (N + 1) / 2; camada++) {
            for (int i = camada; i < N - camada; i++) {
                for (int j = camada; j < N - camada; j++) {
                    matriz[i][j] = camada + 1;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j > 0) cout << " ";
                cout << setw(3) << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

