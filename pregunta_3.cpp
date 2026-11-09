#include <iostream>
#include <array>
#include <string>
#include <fstream>
using namespace std;
struct Estudiante{
    string nombre;
    int nacimiento;
    double gpa;
};

int main(){
    array<Estudiante, 10> estudiantes = {{{"Juan", 2000, 3.4}, {"Maria", 2005, 2.8}}};
    int pos = 2;

    for (int i = 0; i < 2; i++){
        cout << "Estudiante " << pos + 1 << " - Nombre: ";
        cin >> estudiantes[pos].nombre;
        cout << "Año de nacimiento: ";
        cin >> estudiantes[pos].nacimiento;
        cout << "GPA: ";
        cin >> estudiantes[pos].gpa;
        pos++;
    }

    string nombres[] = {"Gaby", "Patty", "Diana"};
    int nacimientos[] = {2002, 2004, 2006};
    double gpas[] = {3.8, 3.0, 2.9};
    for (int i = 0; i < 2; i++){
        estudiantes[pos] = {nombres[i], nacimientos[i], gpas[i]};
        pos++;
    }

    ifstream archivo("datos.txt");
    if (!archivo.is_open()){
        cout << "No se pudo abrir datos.txt\n";
        return 1;
    }
    string nombre;
    int nacimiento;
    double gpa;
    while (pos < 10 && archivo >> nombre >> nacimiento >> gpa){
        estudiantes[pos] = {nombre, nacimiento, gpa};
        pos++;
    }
    archivo.close();

    int Actual = 2026;

    cout << "\nNombre - Edad - GPA - Beca\n";
    for (const auto &e : estudiantes){
        cout << e.nombre;
        cout << " - ";
        cout << Actual - e.nacimiento;
        cout << " - ";
        cout << e.gpa;
        cout << " - ";
        if (e.gpa >= 3.5){
            cout << "Si";
        } else {
            cout << "No";
        }
        cout << "\n";
}
    return 0;
}