#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the amount in USD: " << endl;
    int amount = 0;
    cin >> amount;

    cout << "Funt = " << amount * 1.487 << endl
         << "Frank = " << amount * 0.172 << endl
         << "DeutchMark = " << amount * 0.584 << endl
         << "Jen = " << amount * 0.00955 << endl;
    return 0;
}