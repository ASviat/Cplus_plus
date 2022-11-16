#include <iostream>
using namespace std;

int main()
{
    double temperature = 0;
    cout << "Enter temperature in Celsias: " << endl;
    cin >> temperature;

    temperature = temperature * 9 / 5 + 32;
    cout << "Temperature in Fahrenheits is " << temperature << endl;
    
    return 0;
}