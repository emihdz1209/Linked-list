#include <iostream>

using namespace std;

// Definición de la estructura Node
struct Node {
    int data; // Dato almacenado en el nodo
    Node* next; // Puntero al siguiente nodo
};

// Función para agregar un nodo al final de la lista
void addNode(Node* &head, int value) {
    Node* newNode = new Node(); // Crear un nuevo nodo en memoria
    newNode->data = value; // Asignar el valor al campo data del nodo
    newNode->next = nullptr; // El siguiente nodo es nullptr

    if (head == nullptr) { // Si la lista está vacía
        head = newNode; // El nuevo nodo es la cabeza de la lista
    } else {
        Node* temp = head; // Crear una variable temporal para almacenar la cabeza actual

        // Recorrer la lista hasta encontrar el último nodo
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode; // Enlazar el último nodo con el nuevo nodo
    }
}

// Función para mostrar los elementos de la lista
void showList(Node* head) {
    Node* temp = head; // Crear una variable temporal para recorrer la lista
    while (temp != nullptr) { // Mientras no se llegue al final de la lista
        cout << temp->data << "-> "; // Imprimir el dato del nodo actual
        temp = temp->next; // Avanzar al siguiente nodo
    }
    cout << "nullptr" << endl; // Indicar el final de la lista
}

int main() {
    Node* list = nullptr; // Inicializar la lista como vacía (cabeza es nullptr)

    // Agregar nodos a la lista
    addNode(list, 40);
    addNode(list, 10);
    addNode(list, 490);

    cout << "Lista de valores: " << endl;

    showList(list); // Mostrar los elementos de la lista

    return 0; // Retornar 0 para indicar una ejecución exitosa
}