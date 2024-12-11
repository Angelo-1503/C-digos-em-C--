#include <iostream>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;

        int arr[102][102];
        for (int i = 0; i < n; i++) {
            int m = i + 1;
            int k = 2;
            for (int j = 0; j <= i; j++, m--) {
                arr[i][j] = m;
            }
            for (int j = i + 1; j < n; j++, k++) {
                arr[i][j] = k;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0)
                    cout << " " << arr[i][j];
                else
                    cout << "  " << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
