
#include "Fraccion.h"
#include <iostream>
using namespace std;

int main(){
    int n = 2;

    cout << "Introduce el numero de fracciones: ";
    cin >> n;

    Fraccion arr[n];

    for (int i = 0; i < n; i++)
    {
        int num, den;
        cout << "Introduce el numerador de la fraccion " << i+1 << ": ";
        cin >> num;
        cout << "Introduce el denominador de la fraccion " << i+1 << ": ";
        cin >> den;

        if (den == 0)
        {
            cout << "El denominador no puede ser 0" << endl;
            return 0;
        } 
        arr[i] = Fraccion(num, den);
    }

    Fraccion f3 = arr[0].sumaFracciones(arr[1]);
    f3.imprimeFraccion();

    Fraccion f4 = arr[2].sumaFracciones(arr[3]);
    f4.imprimeFraccion();

    return 0;
}