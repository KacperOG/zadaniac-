#include <iostream>

using namespace std;
double liczba_a = 0;
double liczba_b = 0;
double liczba_c = 0;

int main()
{
    // Wyświetla relację dwóch liczb
    std::cout << "Porownanie dwoch liczb \n";
    std:: cout << "Wprowadz liczbe a: \n";
    std:: cin >> liczba_a;
    std:: cout << "Wprowadz liczbe b: \n";
    std:: cin >> liczba_b;
    std:: cout << endl << "Zachodzi nast. relacja pomiedzy liczbami: ";

    if (liczba_a > liczba_b) //porownujemy liczby, czy a jest wieksza?
    {
        std:: cout << liczba_a << " > " << liczba_b << "\n"; //wyswietlamy relacje
    }
    else if (liczba_a < liczba_b) // czy a jest mniejsza od b?
    {
        std:: cout << liczba_a << " < " << liczba_b << "\n";
    }
    else //w innym przypadku jest rowna
    {
        std:: cout << liczba_a << " = " << liczba_b << "\n";
    }
    return 0;
}
