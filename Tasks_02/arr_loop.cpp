#include <iostream>
#include <array>

int main()
{
    // int arr[5] = {10, 11, 12, 13, 14};
    std::array<int, 5> arr = {10, 11, 12, 13, 14};
    std::uint16_t count = 0;
    for (int e : arr)
    {
        std::cout << "Element No. " << count << " is: " << e << std::endl;
        count++;
    }
}