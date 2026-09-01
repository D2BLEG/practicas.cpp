// 2NLIOTS-YairGonzalez-05_262c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <vector>
using namespace std;
void pop_arreglos_aves(vector<string>Aves) {
    Aves.pop_back();
    cout << "Los valores finales del vector (Pila) son :" << endl;
    for (int i = 0; i < Aves.size(); i++) {
        cout << Aves[i] << ", ";
    }
    cout << "\n";
}
vector<string> push_arreglos_aves(vector<string> nombres) {
    nombres.push_back("Quetzal");
    nombres.push_back("Cotorros");
    nombres.push_back("Perico");
    cout << "Los valores del vector (Pila) son :" << endl;
    for (int i = 0; i < nombres.size(); i++) {
        cout << nombres[i] << ", ";
    }
    cout << "\n";
    return nombres;
}

int main()
{
    cout << "Activida 05 - Vector Dinamico - Aves (Strings/POP/PUSH)!\n";
    vector<string> aves = { "Loro gris","Paloma dimante","Guacamaya" };
    vector<string> nuevas_aves = {};
    nuevas_aves = push_arreglos_aves(aves);
    pop_arreglos_aves(nuevas_aves);
}

