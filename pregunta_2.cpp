#include <iostream>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    array<string, 12> paises = {"Argentina", "Bolivia", "Brasil", "Chile", "Colombia", "Ecuador", "Guyana", "Paraguay", "Peru", "Surinam"};
    paises.at(10) = "Uruguay";
    paises[11] = "Venezuela";

    cout << "Todos los paises:\n";
    for(const auto& p : paises){
        cout << p << " ";
    }
    cout << "\nPaises que inician con C o P:\n";
    for(const auto& p : paises){
        if(p[0] == 'C' || p[0] == 'P'){
            cout << p << " ";
        }
    }

    cout << "\nPrimer elemento: " << paises.front();
    cout << "\nUltimo elemento: " << paises.back();

    sort(paises.begin(), paises.end());
    cout << "\nPaises ordenados:\n";
    for(const auto& p : paises){
        cout << p << " ";
    }
    cout << endl;

    return 0;
}