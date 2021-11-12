#include <iostream>

using namespace std;
double liczba_a = 0;
double liczba_b = 0;
double liczba_c = 0;

int main()
{
    // Wartosc absolutna (bezwzgledna) liczby
    std :: cout << "Wartosc absolutna liczby \n";
    std :: cout << "Wprowadz liczbe: \n";
    std :: cin >> liczba_a;
    std :: cout << "|" << liczba_a << "| = ";

    if (liczba_a < 0) //jesli jest ujemna, należy zmienić znak
    std :: cout << -liczba_a << endl;
    else //w przeciwnym razie nic się nie zmieni
    std :: cout << liczba_a << endl;
    return 0;
}
