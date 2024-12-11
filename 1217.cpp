#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int N{};
    cin >> N;
    cin.ignore();

    double total_gasto{};
    int total_frutas{};

    for(int i=0; i< N;i++){
        double valor_gasto{};
        cin >> valor_gasto;
        string frutas{};
        int num_frutas=1;
        cin.ignore();

        getline(cin,frutas);
        for(char c : frutas){
            if(c == ''){
                num_frutas++;
            }
        }
        total_gasto += valor_gasto;
        total_frutas += num_frutas;

        cout << "day" << i+1 << ": " << num_frutas << "kg/n";
    }

    double media_gasto = total_gasto / N;
    double media_frutas = static_cast<double>(total_frutas)/N;

    cout << fixed << setprecision(2);
    cout << media_frutas << " kg by day\n";
    cout << "R$ " << media_gasto << " by day\n";


    return 0;
}
