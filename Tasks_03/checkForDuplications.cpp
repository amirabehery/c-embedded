#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <vector>

bool contains(std::vector<int> alist, int x)
{
    bool result = false;
    for (size_t i = 0; i < alist.size(); i++)
    {
        if( x == alist[i])
        {
            result = true;
        }
    }
    return result;
}

int main()
{
    std::vector<int> arr = {1,2,1,2,5,12,0,6,4,6,6,6,5,12,2,2,2,2,2,2};
    std::vector<int> uniques;
    std::vector<int> counts;

    for (size_t i = 0; i < arr.size(); i++)
    {
        bool check = contains(uniques, arr[i]);
        
        if (!check)
        {
            uniques.push_back(arr[i]); 
            counts.push_back(1);
        }
        else
        {
            for (size_t j = 0; j < uniques.size(); j++)
            {
                if (uniques[j] == arr[i])
                {
                    counts[j]++;
                }
                
            }
            
        }

    }
    for (size_t k = 0; k < uniques.size(); k++)
    {
        std::cout << uniques[k] << " : " << counts[k] << std::endl;
    }
    
    return 0;
}