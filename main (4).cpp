/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   // Declarar las variables
    float num1;
    float num2;
    float num3;
    float num4;
    float suma;
    float promedio;
    
    cout << "este programa suma 4 numeros y despues hace el proemdio" <<endl; 
    // Solicitar al usuario que ingrese los cuatro números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    // Calcular la suma de los cuatro números
    suma = num1 + num2 + num3 + num4;

    // Calcular el promedio
    promedio = suma / 4;

    // Mostrar los resultados
    cout << "La suma de los cuatro números es: " << suma << endl;
    cout << "El promedio de los cuatro números es: " << promedio << endl;

    return 0;
}