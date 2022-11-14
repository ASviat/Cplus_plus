#include <iostream>
using namespace std;
int main()
{
    double gallons;
    cout << "Enter quantity of gallons: ";
    cin >> gallons;
    gallons /= 7.481;
    cout << "Number of foots = " << gallons << endl;
    return 0;
}