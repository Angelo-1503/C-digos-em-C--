#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

    bool ehPalindromo(string s){
    string tome = s;
    reverse(s.begin(),s.end());
    return tome == s;
    }

int main()
{

    string x{};
    getline(cin,x);
    if(ehPalindromo(x)){
        cout << "Eh um palindromo";
    }else{
        cout << "Nao eh um palindromo";
    }

    return 0;
}

