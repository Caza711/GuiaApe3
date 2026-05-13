#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {}
};

Nodo* insertar(Nodo* raiz, int valor) {
    // TODO: Implementa tu lógica aquí

    // bajo por el árbol hasta encontrar dónde insertar
    Nodo* actual = raiz;
    while (actual != nullptr) {
        if (valor < actual->valor) {
            // va a la izquierda
            if (actual->izquierdo == nullptr) {
                actual->izquierdo = new Nodo(valor); // inserto aquí
                break;
            }
            actual = actual->izquierdo;
        } else {
            // va a la derecha
            if (actual->derecho == nullptr) {
                actual->derecho = new Nodo(valor); // inserto aquí
                break;
            }
            actual = actual->derecho;
        }
    }

    return raiz;
}

int main() {
    Nodo* raiz = new Nodo(10);
    
    insertar(raiz, 5);
    insertar(raiz, 15);
    insertar(raiz, 3);
    
    cout << "--- Prueba Ejercicio 2 ---" << endl;
    cout << "Raiz (Esperado 10): " << raiz->valor << endl;
    
    if(raiz->izquierdo) cout << "Hijo Izquierdo (Esperado 5): " << raiz->izquierdo->valor << endl;
    else cout << "Hijo Izquierdo: null" << endl;
    
    if(raiz->derecho) cout << "Hijo Derecho (Esperado 15): " << raiz->derecho->valor << endl;
    else cout << "Hijo Derecho: null" << endl;
    
    if(raiz->izquierdo && raiz->izquierdo->izquierdo) 
        cout << "Hijo Izq del 5 (Esperado 3): " << raiz->izquierdo->izquierdo->valor << endl;
    else cout << "Hijo Izq del 5: null" << endl;

    return 0;
}
