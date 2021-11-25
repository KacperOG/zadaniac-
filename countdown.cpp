// Program odlicza w dol od liczby podanej jako argumen przy wywolaniu programu
#include <iostream>
#include <string>
using namespace std;
int liczba;
#include <iostream>

auto for_loop(int const init, int const limit) -> void
{
    for (auto i = init; i <= limit; ++i) {
        std::cout << limit - i << "..." << '\n';
    }
}

int main(int argc, char* argv[])
{
    liczba = stoi(argv[1]); // Konwersja typów char => int, znków na liczbę
    for_loop(0, liczba);

    return 0;
}
