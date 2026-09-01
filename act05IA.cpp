#include <iostream>
#include <vector>
#include <string>

using namespace std;

void imprimir_pila(const string& mensaje, const vector<string>& pila) {
    cout << mensaje << endl;
    for (const string& ave : pila) {
        cout << "- " << ave << "\n";
    }
    cout << "\n";
}

void push_aves(vector<string>& pila) {
    pila.insert(pila.end(), { "Cotorro", "Quetzal", "Perico" });
    imprimir_pila("Valores del vector tras PUSH:", pila);
}

void pop_aves(vector<string>& pila) {
    if (!pila.empty()) {
        pila.pop_back();
    }
    imprimir_pila("Valores finales del vector tras POP:", pila);
}

int main() {
    cout << "=== Actividad 05: Memoria Dinamica (Pila de Aves) ===\n\n";

    vector<string> pila_aves = { "Loro gris", "Paloma diamante", "Guacamaya" };

    push_aves(pila_aves);
    pop_aves(pila_aves);

    return 0;
}