#include <iostream>
#include <string>

using namespace std;

 int contarVogais(string s){
    int cont{};
    for(char c:s){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
    }
 }
    return cont;
 }



int main () {
    string frase;
    getline(cin,frase);
    cout << contarVogais(frase) << endl;

    return 0;
}
