#include <iostream>

using namespace std;
double liczba_a = 0;
double liczba_b = 0;
double liczba_c = 0;

int main()
{
          // Wyświetla liczbę njwiekszą spośród 3
        std :: cout << "Wyswietla liczbe najwieksza \n";
        std :: cout << "Wprowadz liczbe a: \n";
        std :: cin >> liczba_a;
        std :: cout << "Wprowadz liczbe b: \n";
        std :: cin >> liczba_b;
        std :: cout << "Wprowadz liczbe c: \n";
        std :: cin >> liczba_c;

        std :: cout << endl << "Najwieksza liczba jest: ";

        if ((liczba_a > liczba_b) > liczba_c) //porownujemy liczby, czy a jest najwieksza
        {
            std :: cout << liczba_a << "\n";
        }
        else if ((liczba_a < liczba_b) > liczba_c) //porownujemy liczby, czy b jest najwieksza
        {
            std :: cout << liczba_b << "\n";
        }
        else //w innym przypadku jest rowna
        {
            std :: cout << liczba_c << "\n";
        }

    return 0;
}

