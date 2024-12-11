#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int contarCaractere(string s, char x) {
    int cont{};
    for (char c : s) {
        if (x == c) cont++;
    }
    return cont;
}
int main() {
    string frase{};
    char x{};
    getline(cin, frase);
    cin >> x;
    cout << contarCaractere(frase, x) << endl;
    return 0;
}