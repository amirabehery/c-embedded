#include <iostream>
#include <vector>


int main()
{
    //vectors as dynamic arrays
    std::vector<int> nums;
    nums.push_back(12);
    nums.push_back(20);

    for (size_t i = 0; i < nums.size(); i++)
    {
       std::cout <<nums[i]<<std::endl;
    }
    







    return 0;
}