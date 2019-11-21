#include <iostream>

using namespace std;

int sumatoria(int num1, int num2);

int main()
{
    int m,n;
    cout << "SUMATORIA" << endl<< endl;
    do{
        cout << "Desde: " ;
        cin >> m;
    } while (m < 0);
    do{
        cout << "Hasta: " ;
        cin >> n;
    } while (n < 0);

    cout << "TOTAL = " << sumatoria(m,n) << endl;
    return 0;
}

int sumatoria (int num1, int num2)
{
    int total = 0;
    for (int i = num1 ; i <= num2; i++){
            total += i;
    }
    return total;
}
