#include <iostream>

using namespace std;
double liczba_a = 0;
double liczba_b = 0;
double liczba_c = 0;

int main()
{
    //Wyświetla Dodatnia - nieujemna - ujemna
    std :: cout << "Sprawdza czy liczba jest : Dodatnia-nieujemna-ujemna? \n";
    std :: cout << "Wprowadz liczbe: \n";
    std :: cin >> liczba_a;
    std :: cout << endl << "wynik analizy: ";

    if (liczba_a > 0) //1 jesli liczba jest dodatnia
    {
        std::cout << "1 \n";
    }
    else if (liczba_a < 0) // -1 jesli liczba jest ujemna
    {
        std::cout << " -1 \n";
    }
    else //w innym przypadku jest rowna 0
    {
        std::cout << " 0 \n";
    }
    return 0;
}
