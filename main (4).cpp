/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float num1; // Declaro la primera variable
    float num2; // Declaro la segunda variable
    float num3; // Declaro la tercera variable
    float num4; // Declaro la cuarta variable
    float suma; // Declaro la quinta variable
    float promedio; // Declaro la sexta variable
    
    cout << "este programa suma 4 numeros y despues hace el proemdio" <<endl; // le indica al usuario lo que hace el programa 
    // Solicita al usuario que ingrese los cuatro números
    cout << "Ingrese el primer número: ";
    cin >> num1; // guarda el valor dado por el usuario en la variable num1
    cout << "Ingrese el segundo número: ";
    cin >> num2; // guarda el valor dado por el usuario en la variable num2
    cout << "Ingrese el tercer número: ";
    cin >> num3; // guarda el valor dado por el usuario en la variable num3
    cout << "Ingrese el cuarto número: ";
    cin >> num4; // guarda el valor dado por el usuario en la variable num4

    suma = num1 + num2 + num3 + num4; // Calcula la suma de las cuatro variables y guarda el resultado en la variable suma

    promedio = suma / 4; // Calcula el promedio y guarda el resultado en la variable promedio

    // Muestra los resultados de la suma y del promedio
    cout << "La suma de los cuatro números es: " << suma << endl;
    cout << "El promedio de los cuatro números es: " << promedio << endl;

    return 0;
}
