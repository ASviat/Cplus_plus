#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios::left) << setw(10) << "Surname" << setw(10) << "Name" << setw(15) << "Adress" << setw(15) << "City" << endl
         << setfill('.') << setw(45) << "." << endl
         << setfill(' ') << setw(10) << "Petrov" << setw(10) << "Vasya" << setw(15) << "Klenovaya 10" << setw(15) << "Minsk" << endl
         << setw(10) << "Ivanov" << setw(10) << "Sergei" << setw(15) << "Freyova 15" << setw(15) << "Prague" << endl
         << setw(10) << "Sidorov" << setw(10) << "Vanya" << setw(15) << "Kalinina" << setw(15) << "Polotsk" << endl;

    return 0;
}