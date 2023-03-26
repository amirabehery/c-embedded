#include <iostream>

int main()
{
    std::uint16_t width, height;
    std::cout << "Enter Width of the image" << std::endl;
    std::cin >> width;
    std::cout << "Enter Height of the image" << std::endl;
    std::cin >> height;
    constexpr std::uint16_t CHANNELS = 3;
    constexpr std::uint16_t BITS = 8;
    std::uint16_t total_bits = width * height * CHANNELS * BITS;
    std::cout << "Total Number of bits in image: " <<total_bits << std::endl;
    return 0;
}