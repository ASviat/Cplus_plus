#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;
    cout << setw(10) << "City: " << setw(12) << "Population: " << endl
         << setw(10) << setfill('.') << "Moscow " << setw(12) << pop1 << endl
         << setw(10) << "Kirov " << setw(12) << pop2 << endl
         << setw(9) << "Ugrumovka " << setw(12) << pop3 << endl;
    return 0;
}