#include "iostream"
#include "string"

using namespace std;

int main()
{
    //Mensaje de bienvenida
    cout << "Hola! Aqui podras realizar sumas " << "\n";

    //Se declaran los números que se sumarán (pueden ser decimales)
    int numero1, numero2;
    string nom;

     //Se pide el primer numero
    cout << "Por favor ingrese el primer valor: " << "\n";

    //Se asigna el primer valor a numero1
    cin >> numero1;

    //Se pide el segundo numero
    cout << "Por favor ingrese el segundo valor: " << "\n";

    //Se asigna el segundo valor a numero2
    cin >> numero2;

    //Se muestra el resultado.
    cout << numero1 << " + " << numero2 << " = " << sqrt(numero1)<< numero1 + numero2;

    cout<< "\n ingresa tu nombre: \n";
    cin>>nom;
    cout<<"\n nombre: "<<nom; 

   return 0;
}