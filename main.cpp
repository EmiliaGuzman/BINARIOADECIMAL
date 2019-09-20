#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int exp,digito, c=0, base =2;
    double binario, decimal;
    cout << "Introduce numero: ";
    cin >> binario;
    exp=0;
    decimal=0;
    while(((int)(binario/10))!=0)///1010, 101
    {
           for(int i=0; i<exp; i++){
               c=c*base;
           digito = (int)binario % 10;///1, 0,1
           decimal = decimal + digito * c;///1, 1, 5,
           exp++;///1,
           binario=(int)(binario/10);///1010, 101
           cout << binario<< endl;
           cout << digito<< endl;
           cout << decimal<< endl;
           cout << exp<< endl;
    }}
    decimal=decimal + binario * c;
    cout << "Decimal: " << decimal << endl;
    return 0;
}
