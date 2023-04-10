#include <iostream>
#include <array>
#include<algorithm>


int main()
{
    //iterator
    std::array arr = {1,2,5,6,1,3,5,10};
    std::array<int, arr.size()>::iterator it;
    for(it = arr.begin(); it != arr.end(); ++it)
    {
        std::cout << *it<<std::endl;
    }

    //swap / fill
    std::array<int, arr.size()> arr2;
    arr2.fill(0);
    std::cout <<"Before Swaping"<<std::endl;
    for(int i =0; i < arr.size(); i++)
    {
        std::cout << arr[i];
    }
    std::cout<<std::endl;
    arr.swap(arr2);
    std::cout <<"After Swaping"<<std::endl;
    for(int i =0; i < arr.size(); i++)
    {
        std::cout <<arr[i];
    }
    std::cout<<std::endl;
    arr.swap(arr2);

    //empty / capacity
    std::cout<<"Is Empty: " << arr.empty() <<std::endl;


    //at
    std::cout<<"At index 2: " << arr.at(2) <<std::endl;

    //sort
    std::sort(arr.begin(), arr.end(),[](int a, int b){return a < b;});
    std::cout <<"After Sorting ascending"<<std::endl;
    for(int i =0; i < arr.size(); i++)
    {
        std::cout <<arr[i]<<",";
    }
    std::cout<<std::endl;
    std::sort(arr.begin(), arr.end(),[](int a, int b){return a > b;});
    std::cout <<"After Sorting Descending"<<std::endl;
    for(int i =0; i < arr.size(); i++)
    {
        std::cout <<arr[i]<<",";
    }
    std::cout<<std::endl;
    return 0;
}