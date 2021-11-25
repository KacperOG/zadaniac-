// Gra w odgadywanie liczb, program generuje losowo liczby z przedziału 1-100
#include <iostream>
#include <random>

using namespace std;
int liczba;
std::random_device rd;
std::uniform_int_distribution <int > l100(1, 100);

int main()
{
    cout << "A guessing game for numbers from 1 to 100 \n";
    auto const x = l100(rd); // drow a number
    // cout << x << endl; // display the drown number
    do {
        cout << "guess: "; cin >> liczba;
        if (x == liczba) {
            std::cout << "just right \n";
        }
        else if (x > liczba) {
            std::cout << "too small \n";
        }
        else if (x < liczba) {
            std::cout << " to big .\n";
        }
    } while (!(x == liczba));
    return 0;

}
