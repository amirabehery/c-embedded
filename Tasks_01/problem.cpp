#include <iostream>

// using namespace std;

int main()
{
    // unsigned int distance_miles = 0;
    std::uint16_t distance_miles = 0;
    constexpr float MILE_TO_KM = 1.609;
    std::cout << "Please enter distance in miles" << std::endl;
    std::cin >> distance_miles;
    float distance_km = distance_miles * MILE_TO_KM;
    std::cout << "distance in kilometers: " << distance_km <<std::endl;
    
    return 0;
}