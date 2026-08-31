#include <iostream>
#include <vector>

using namespace std;

// Función para capturar los valores de la matriz
void capturaValoresMatriz(vector<vector<int>>& matriz, int filas, int columnas) {
    for (int f = 0; f < filas; ++f) {
        for (int c = 0; c < columnas; ++c) {
            cout << "Ingrese el valor de la posición [" << f << "][" << c << "]: ";
            cin >> matriz[f][c];
        }
        cout << "\n";
    }
}

// Función para imprimir la matriz de forma ordenada
void impresionArreglo(const vector<vector<int>>& matriz) {
    cout << "Los valores finales de la matriz bidimensional son:\n\n";
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << "\t";
        }
        cout << "\n";
    }
}

int main() {
    // Optimización de I/O para C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int filas = 3;
    const int columnas = 3;

    // Declaración de la matriz bidimensional de (filas x columnas)
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    cout << "Actividad 04 - Matriz Bidimensional C++ (Matriz de MxN)\n\n";

    capturaValoresMatriz(matriz, filas, columnas);
    impresionArreglo(matriz);

    return 0;
}