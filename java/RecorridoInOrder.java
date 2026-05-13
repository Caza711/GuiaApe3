import java.util.ArrayList;
import java.util.List;

class Nodo {
    int valor;
    Nodo izquierdo, derecho;
    Nodo(int valor) { this.valor = valor; }
}

public class RecorridoInOrder {
    public static void inOrderAux(Nodo nodo, List<Integer> resultado) {
        // TODO: Implementa tu lógica de recorrido aquí

        // si el nodo es null, no hay nada que recorrer
        if (nodo == null) return;

        inOrderAux(nodo.izquierdo, resultado); // primero voy a la izquierda
        resultado.add(nodo.valor);             // luego agrego el nodo actual
        inOrderAux(nodo.derecho, resultado);   // por último voy a la derecha
    }

    public static List<Integer> recorridoInOrder(Nodo raiz) {
        List<Integer> resultado = new ArrayList<>();
        inOrderAux(raiz, resultado);
        return resultado;
    }

    public static void main(String[] args) {
        //        4
        //      /   \
        //     2     6
        //    / \   / \
        //   1   3 5   7
        Nodo raiz = new Nodo(4);
        raiz.izquierdo = new Nodo(2);
        raiz.derecho = new Nodo(6);
        raiz.izquierdo.izquierdo = new Nodo(1);
        raiz.izquierdo.derecho = new Nodo(3);
        raiz.derecho.izquierdo = new Nodo(5);
        raiz.derecho.derecho = new Nodo(7);

        System.out.println("--- RECORRIDO INORDER ---");
        System.out.println("Resultado esperado: [1, 2, 3, 4, 5, 6, 7]");
        System.out.println("Tu resultado:       " + recorridoInOrder(raiz));
    }
}