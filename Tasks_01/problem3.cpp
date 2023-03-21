#include <iostream>

int main()
{
    float width = 0;
    float height = 0;
    std::cout << "Enter Width and Height of a rectangle: " << std::endl;
    std::cin >> width >> height;
    float area_of_rectange = width * height;
    std::cout << "Area of Rectangle: " << area_of_rectange << std::endl;
    return 0;
}