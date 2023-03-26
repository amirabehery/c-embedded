#include <iostream>

namespace calculations
{
    std::int16_t add(int x, int y)
    {
        return x + y;
    }
    std::int16_t sub(int x, int y)
    {
        return x - y;
    }
    std::int16_t mult(int x, int y)
    {
        return x * y;
    }
    std::int16_t div(int x, int y)
    {
        return x / y;
    }
}

int main()
{
    char operation = '+';
    std::int16_t first;
    std::int16_t second;
    std::cout <<"Enter First Number: " <<std::endl;
    std::cin >> first;

    std::cout <<"Enter Second Number: " <<std::endl;
    std::cin >> second;

    std::cout <<"Choose one from (+, -, *, /) " <<std::endl;
    std::cin >> operation;

    std::int16_t result;
    switch (operation)
    {
        case '+':
            result = calculations::add(first, second);
            break;
        
        case '-':
            result = calculations::sub(first, second);
            break;

        case '*':
            result = calculations::mult(first, second);
            break;

        case '/':
            result = calculations::div(first, second);
            break;

        default:
            break;
    }
    std::cout <<"Result for (" << first << operation << second <<") is: " <<result <<std::endl;
}