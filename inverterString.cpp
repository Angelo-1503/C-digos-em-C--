#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

 string inverterString(string &s){
    reverse(s.begin(), s.end());
    return s;
 }



int main () {

    string frase{};
    getline(cin,frase);
    cout << inverterString(frase) << endl;
    return 0;
}

