#include <iostream>

using namespace std;
void cuentaRegresiva(int n);
int main()
{
    cout << "Cuenta regresiva" << endl;
    cuentaRegresiva(10);
    return 0;
}

void cuentaRegresiva(int n)
{
    if (n >= 0){
        cout << n << "--";
        cuentaRegresiva(n-1);
    }

}
