#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

    string substituirCaracter(string s, char x, char y){
        replace(s.begin(),s.end(),x,y);
        return s;
    }

int main()
{
    string frase;
    char x{}, y{};
    getline(cin,frase);
    cin >> x >> y;
    cout << substituirCaracter(frase, x,y) << endl;

    return 0;
}

