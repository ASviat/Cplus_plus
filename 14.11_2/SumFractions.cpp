#include <iostream>

using namespace std;

int main()
{
    int a1 = 0;
    char b1 = 0;
    int c1 = 0;

    cout << "Going to Sum two fractions" << endl;

    cout << "Enter first fraction: " << endl;
    cin >> a1 >> b1 >> c1;
    cout << endl;

    int a2 = 0;
    char b2 = 0;
    int c2 = 0;
    cout << "Enter second fraction: " << endl;
    cin >> a2 >> b2 >> c2;

    cout << "Sum of fractions is: "
         << "" << (a1 * c2 + c1 * a2) << '/' << "" << c1 * c2;

    return 0;
}