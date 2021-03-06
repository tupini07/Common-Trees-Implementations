#include <stdlib.h>
#include<stdio.h>
#include<iostream>
#include "AVL.h"
#include "RedBlack.h"
#include "BigTree.h"
using namespace std;

int main(int argc, char* argv[]) {
    int opcion = 0;
    do {
        system("cls");
        cout << "||Menú de selección de ejemplos de Árboles||" << endl;
        cout << "1 - AVL" << endl;
        cout << "2 - Árbol Rojo-Negro" << endl;
        cout << "3 - Árbol B-Tree" << endl;
        cout << "0 - Terminar" << endl;
        cout << " Seleccione una opcion -> ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                AVLTree::AVLmenu();
                break;
            case 2:
                RedBlack::RBMenu();
                break;
            case 3:
                BigTree::BigMenu();
                break;
            default:
                if (opcion != 0) {
                    cout << "Opción no Valida" << endl;
                    system("pause");
                }
                break;
        }
    } while (opcion != 0);
    cout << "Fin del programa" << endl;
    system("pause");
}




