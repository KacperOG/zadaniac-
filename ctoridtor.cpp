#include <iostream>

struct dstr //stuktura o nazwie dstr
{
    std::string ds1; //random pole1
    std::string ds2; //random pole2

    dstr(std::string a, std::string b){ //konstruktor i wkladamy do srodka zmienne (stwarza obiekt)
        ds1 = a; //przypisanie zmiennych z konstruktora
        ds2 = b;
    }
    ~dstr(){ //destruktor- niszczy strukta
        std::cout << ds1 << "\n"; //przypisanie zmiennych z dekonstruktora
        std::cout << ds2 << "\n";
        std::cout << "DESTRUCTION!"; //wypisuje destruction
    }
};


auto main()-> int
{
    auto ndstr = dstr("2", "1"); //nowa struktura przechodzi do dstr i potem do ~dstr
    return 0;
}
