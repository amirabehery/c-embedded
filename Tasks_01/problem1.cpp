#include <iostream>

int main()
{
    std::string username = "";
    std::cout << "Enter your name? " << std::endl;
    std::cin >> username;
    std::cout <<"Welcome " + username;
    
    return 0;
}