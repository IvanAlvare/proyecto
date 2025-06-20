/*

Nombre proyecto:
Fecha:

Actividad/Enunciado:

*/

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){

    srand(time(0));
    int numerodado;
    numerodado = (rand() % 6) + 1;      /// Lineas de codigo de numeros random
    cout << "Numero aleatorio:" << numerodado << endl; /// PASAR DADO A FUNCION
                                                       /// NO DEJAR EN MAIN
    int opcion; /// Variable del menu.

    cout << "Ingrese un numero para elegir una opcion: " << endl << endl;
    cout << "------------------------------------------------------------------------------" << endl << endl;
    cout << "1. UN JUGADOR:" << endl << endl;
    cout << "2. DOS JUGADORES:" << endl << endl;
    cout << "3. MOSTRAR PUNTUACION MAS ALTA:" << endl << endl;
    cout << "4. SALIR DEL JUEGO:" << endl << endl;
    cout << "------------------------------------------------------------------------------" << endl << endl;
    cin >> opcion;
    system("pause"); /// Menu grafico.
    system("cls");

    switch (opcion){

    case 1: /// Llamar funcion de un jugador

        system("pause");
        system("cls");

        break;

    case 2: /// Llamar funcion de dos jugadores

        system("pause");
        system("cls");

        break;

    case 3: /// Funcion que muestre mejor puntuacion

        system("pause");
        system("cls");

        break;

    case 4:
        system("cls");
        cout << "Gracias por jugar !!" << endl;
        system ("pause");
        return 0;

    default:
        system("cls");
        return 0;
    }

return 0;
}
