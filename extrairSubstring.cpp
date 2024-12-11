#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

    string extrairSubstring(string s, int a, int b)
    {
        return s.substr(a, b);
    }
int main()
{

    string frase{};
    int a{}, b{};
    getline(cin, frase);
    cin >> a >> b;
    cout << extrairSubstring(frase, a, b) << endl;

    return 0;
}
