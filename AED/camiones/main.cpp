#include <iostream>

using namespace std;
//PASO 1: DECLARAR PROTOTIPO DE LA FUNCION
void prueba();
int sumar(int n1, int n2);

int main()
{
    int num1, num2;
    /*//DECLARACION DE VARIABLES
    int rango;
    int identificador;
    int sumatoriaimpares = 0;
    int sumatoriapares = 0;

    cout << "INGRESE EL RANGO DE CAMIONES: " << endl;
    cin >> rango;

    for ( int i = 1 ; i <= rango; i++)
    {
        cout << "INGRESE EL IDENTIFICADOR DEL CAMION:" << endl;
        cin >> identificador;
        if (identificador % 2 == 0){
            sumatoriapares++;
        }
        else{
            sumatoriaimpares++;
        }
    }
    cout << "CAMIONES QUE VAN AL SUR: " << sumatoriapares << endl;
    cout << "CAMIONES QUE VAN AL NORTE: " << sumatoriaimpares << endl;
*/
    //PASO 3: LLAMAR A LA FUNCION

    prueba();
    cout << "Ingrese numero 1: ";
    cin >> num1;
    cout << "Ingrese numero 2: ";
    cin >> num2;
    cout << sumar( num1,num2) << endl; // solo void no necesita cput para imprimir
    return 0;
}
// PASO 2: TRABAJAR CON LA FUNCION

void prueba()
{
    cout << "INTRO DE FUNCIONES" << endl;
}
int sumar(int n1, int n2)
{
    int r = n1 + n2;
    return r;
}
