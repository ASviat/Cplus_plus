#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << setw(6) << 1990 << setw(8) << 135 << endl
         << setw(6) << 1991 << setw(8) << 7290 << endl
         << setw(6) << 1992 << setw(8) << 11300 << endl
         << setw(6) << 1993 << setw(8) << 16200 << endl;

    return 0;
}