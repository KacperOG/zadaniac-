// Program "99 Bottles of beer"
#include <iostream>
#include <string>
int liczba;
#include <iostream>

auto for_loop(int const init, int const limit) -> void
{
    for (auto i = init; i < limit; ++i) {
        std::cout << limit - i << " bottles of beer on the wall,";
        std::cout << limit - i << " bottles of beer." << '\n';
        std::cout << "Take one down, pass it around," << '\n';
    }
}

int main(int argc, char* argv[])
{
    liczba = stoi(argv[1]); // Konwersja typów char => int, znków na liczbę
    for_loop(0, liczba);
    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, ";
    std::cout << liczba << " bottels of beer on the wall...";
    return 0;
}
