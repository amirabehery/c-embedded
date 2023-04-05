#include <iostream>
#include <array>

int main()
{
    std::array list_ = {1, 2, 3, 4, 5};

    // for(int e : list_)
    // {
    //     std::cout << e << std::endl;
    // }

    for (int i=0; i < list_.size(); i++)
    {
        std:: cout<<"Index of " << i << ", Value : " << list_[i] <<std:: endl;
        printf("index address %i ");
    }
    // for (auto e : list_)
    // {
    //     // std:: cout << e << std::endl;
    //     std:: cout << sizeof(e) << std::endl;
    // }
    return 0;
}