#include <iostream>

struct dstr 
{
    std::string ds1; 
    std::string ds2; 

    dstr(std::string a, std::string b){ 
        ds1 = a; 
        ds2 = b;
    }
    ~dstr(){ 
        std::cout << ds1 << "\n";
        std::cout << ds2 << "\n";
        std::cout << "DESTRUCTION!"; 
    }
};


auto main()-> int
{
    auto ndstr = dstr("2", "1"); 
    return 0;
}
