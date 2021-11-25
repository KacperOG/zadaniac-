// Program FizzBuzz"
#include <iostream>
#include <string>
using namespace std;
int liczba;

int main(int argc, char* argv[])
{
    liczba = stoi(argv[1]); // Konwersja typów char => int, znków na liczbę
    int x = 1;
    do {
        cout << "n =  " << x << '\n';
        if ((x % 3) == 0 && (x % 5) == 0) {
            std::cout << "15 FizzBuzz...\n";
        }
        else if ((x % 5) == 0) {
            std::cout << "5 Buzz...\n";
        }
        else if ((x % 3) == 0) {
            std::cout << "3 Fizz...\n";
        }
        x++;
    } while (x != liczba);
    return 0;
}
