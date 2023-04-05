#include <iostream>
#include <array>
#include <algorithm>

void welcome(std::string text)
{
    std::cout << "Welcome " << text <<std::endl;
}

int main()
{
    // function pointer declare
    void (*func_pntr)(std::string) = &welcome;
    int var = 10;
    std::string x = "MMMM";

    // lambda functions
    auto lambda = [&var]()
    {
        std::cout << var <<std::endl;
    };

    lambda();
    std::array list = {100, 10, 20, 5,3,-2};

    //sorting list
    std::sort (list.begin(), list.end(), [](int &a, int &b)-> bool{
        return a > b;
    });

    std::cout << "=====Lambda function sort" <<std::endl;
    for (auto e : list)
    {
        std::cout << e << ", " ;
    }
    std::cout << std::endl;

    // for_each
    std::for_each(list.begin(), list.end(), [](int &element)-> void{
        element *=2;
    });
    std::cout << "=====Lambda function *2" <<std::endl;
    for (auto e : list)
    {
        std::cout << e << ", " ;
    }
    std::cout << std::endl;


    //pointer to function
    func_pntr("Any Word!");
    return 0;
}