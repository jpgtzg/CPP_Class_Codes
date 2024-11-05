// Written by Juan Pablo Gutiérrez

#include <iostream>
#include <stdio.h>

using namespace std;

void actividad1();
void actividad2();
void actividad3();

int main() {
    actividad3();
    return 0;
}

void actividad1() { 
    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << endl;
    }
}

void actividad2() {
    int arreglo[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un número: ";
        cin >> arreglo[i];
    }

    int suma = 0;

    for (int i = 0; i < 10; i++) {
        suma += arreglo[i];
        cout << arreglo[i] << endl;
        cout << "Suma: " << suma << endl;
    }
}

void actividad3() {
    int arreglo[50];

    // Generate random numbers
    for (int i = 0; i < 50; i++) {
        arreglo[i] = rand() % 100;
    }

    // Print numbers
    for (int i = 0; i < 50; i++) {
        cout << arreglo[i] << endl;
    }
}

void actividad4(){
    int arreglo[25];

    int num_mayor = 0;
    int index_mayor = 0;

    // Generate random numbers
    for (int i = 0; i < 25; i++) {
        arreglo[i] = rand() % 500;
    }

    for (int i = 0; i < 25; i++) {
        cout << i << " : " << arreglo[i] << endl;
        if (arreglo[i] > num_mayor) {
            num_mayor = arreglo[i];
            index_mayor = i;
        }
        cout << "El valor más grande es: " << num_mayor << " y está en la posición: " << index_mayor << endl;
    }

    cout << "El valor más grande del arreglo es: " << num_mayor << " y está en la posición: " << index_mayor << endl;
}

void actividad5(){
    string frase = "Pensamiento computacional orientado a objetos";

    cout << "La frase tiene " << frase.length() << " caracteres" << endl;

    for (int i = 0; i < frase.length(); i++) {
        cout << frase[i] << endl;
    }
}