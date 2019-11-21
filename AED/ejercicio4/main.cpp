#include <iostream>

using namespace std;
int multi_recursivaRegresiva (int n);

int main()
{
    int entero;
    cout << "Ingrese un entero positivo" << endl;
    cin >> entero;
    cout << "RESULTADO = " << multi_recursivaRegresiva (entero)<< endl;
    return 0;
}
int multi_recursivaRegresiva (int  n)
{
    if (n > 1){
        return n * multi_recursivaRegresiva(n-1);
    }
    else if (n == 0){
        return 1;
    }

}
