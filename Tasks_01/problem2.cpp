#include <iostream>

int main()
{
    std::uint16_t radius = 0;
    constexpr float PI = 3.14159;
    std::cout << "Enter radius of circle: " << std::endl;
    std::cin >> radius;
    float area = radius * radius * PI;
    std::cout << "Area of Circle: " << area << std::endl;
    return 0;
}