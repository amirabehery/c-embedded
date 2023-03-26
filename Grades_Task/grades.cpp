#include <iostream>

int main() 
{
    std::uint16_t grade = 0;
    std::cout << "Enter your Grade: " << std::endl;
    std::cin >> grade;
    std::string result;
    if (grade <= 50)
    {
        result = "Failed";
    }
    else if (grade > 50 && grade <= 65)
    {
        result = "Passed";
    }
    else if (grade > 65 && grade <= 75)
    {
        result = "Good";
    }
    else if (grade > 75 && grade <= 85)
    {
        result = "Very Good";
    }
    else if (grade > 85 && grade <= 100)
    {
        result = "Excellent";
    }
    else
    {
        std::cout <<"Unknown Grade format" <<std::endl;
        result = "Undefined";
    }
    std::cout << "Result is: " << result << std::endl;
    return 0;
}