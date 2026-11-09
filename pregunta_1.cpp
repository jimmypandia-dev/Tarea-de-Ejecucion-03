#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main(){
    array<int, 20> numeros = {23, 21, 25, 27, 29, 51, 53, 55, 59, 61, 63, 65, 67, 69, 71, 11, 5, 3, 17, 1};
    cout << "Todos los elementos del grupo:\n";
    for(auto x : numeros){
        cout << x << " ";
    }
    cout << "\nElementos mayores que 20 y menores que 50:\n";
    for (auto x : numeros){
        if (x > 20 && x < 50){
            cout << x << " ";
        }
    }
    cout << "\nElementos del grupo ordenados:\n";
    sort(numeros.begin(), numeros.end());

    for (auto x : numeros){
        cout << x << " ";
    }
    cout << "\nElementos que se encuentren en indices impares menores que 10:\n";

    for (int i = 1; i < 10; i += 2){
        cout << numeros[i] << " ";
    }

    return 0;
}