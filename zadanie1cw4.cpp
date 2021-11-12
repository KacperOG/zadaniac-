#include <iostream>

using namespace std;
double liczba_a = 0;
double liczba_b = 0;
double liczba_c = 0;

int main()
{
    // Liczba większa spośród podanych
     std :: cout << "Drukuje liczbe wieksza \n";
     std :: cout << "Wprowadz liczbe a: \n";
     std :: cin >> liczba_a;
     std :: cout << "Wprowadz liczbe b: \n";
     std :: cin >> liczba_b;
        if (liczba_a < liczba_b)
     std :: cout << "Wieksza jest: " << liczba_b << endl;

    else //w przeciwnym razie liczba a
     std :: cout << "Wieksza jest: " << liczba_a << endl;
    return 0;
}
