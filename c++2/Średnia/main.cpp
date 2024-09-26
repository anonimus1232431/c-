#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d;
    cout<< "Napisz 4 liczby" << endl;
    cin >>a >> b >> c >> d;
    cout<< "Srednia tych liczb to :" <<endl;
    float suma;
    suma = (a+b+c+d)/4;
    cout << suma;
    return 0;
}
